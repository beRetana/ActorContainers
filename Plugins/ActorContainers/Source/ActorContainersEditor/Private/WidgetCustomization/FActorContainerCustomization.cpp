#include "WidgetCustomization/FActorContainerCustomization.h"

#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "IDetailChildrenBuilder.h"
#include "PropertyCustomizationHelpers.h"
#include "DragAndDrop/ActorDragDropOp.h"
#include "Editor/EditorWidgets/Public/SDropTarget.h"

#define LOCTEXT_NAMESPACE "WorkflowUtilsEditor"

void FActorContainerCustomization::BuildHeader(
	TSharedRef<IPropertyHandle>& PropertyHandle,
	FDetailWidgetRow& HeaderRow,
	IPropertyTypeCustomizationUtils& TypeUtils,
	const FName ClassTypePropertyName)
{
	PropertyUtilities = TypeUtils.GetPropertyUtilities();
	ClassTypeHandle = PropertyHandle->GetChildHandle(ClassTypePropertyName);
	PreviousClassType = GetCurrentClassFilter();
	
	ClassTypeHandle->SetOnPropertyValueChanged(
		FSimpleDelegate::CreateRaw(
			this,
			&FActorContainerCustomization::OnFilterChanged));

	ClassTypeHandle->SetOnPropertyValuePreChange(
		FSimpleDelegate::CreateRaw(
			this,
			&FActorContainerCustomization::OnFilterPreChanged));

	bIsFilterLocked = PropertyHandle->HasMetaData(TEXT("LockFilter"));
	
	HeaderRow
	.NameContent()
	[
		SNew(SDropTarget)
		.OnAllowDrop_Lambda([this](const TSharedPtr<FDragDropOperation>& Operation)
		{
			return Operation.IsValid() && Operation->IsOfType<FActorDragDropOp>();
		})
		.OnDropped_Lambda([this](const FGeometry& Geometry, const FDragDropEvent& DragDropEvent)
		{
			const TSharedPtr<FDragDropOperation> Operation = DragDropEvent.GetOperation();
			if (!Operation.IsValid()) return FReply::Unhandled();

			const TSharedPtr<FActorDragDropOp> ActorOperation = StaticCastSharedPtr<FActorDragDropOp>(Operation);
			if (!ActorOperation.IsValid()) return FReply::Unhandled();

			return ExecuteAction(
				&FActorContainerCustomization::DragAndDropActors,
				LOCTEXT("DragAndDrop", "Drag And Drop"),
				ActorOperation);
		})
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.MinWidth(100.f)
			[
				PropertyHandle->CreatePropertyNameWidget()
			]
		]
	]
	.ValueContent()
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(1)
		[
			SNew(SBox)
			.VAlign(VAlign_Center)
			.Padding(0,0,4,0)
			[
				MakeFilterDropdown()
			]
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(4,0,4,0)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Font(IDetailLayoutBuilder::GetDetailFont())
			.Text_Lambda([this]()
			{
				return UpdateItemCount();
			})
		]
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(4,0,0,0)
		[
			SNew(SComboButton)
			.ButtonStyle(FAppStyle::Get(), "SimpleButton")
			.HasDownArrow(true)
			.OnGetMenuContent_Raw(this, &FActorContainerCustomization::MakeContainerMenuContent)
		]
	];
}

void FActorContainerCustomization::BuildChildren(TSharedRef<IPropertyHandle>& PropertyHandle,
	IDetailChildrenBuilder& ChildrenBuilder, const FName ContainerPropertyName)
{
	const TSharedPtr<IPropertyHandle> ContainerHandle = PropertyHandle->GetChildHandle(ContainerPropertyName);

	uint32 ContainerSize{0};
	ContainerHandle->GetNumChildren(ContainerSize);

	for (uint32 i = 0; i < ContainerSize; ++i)
	{
		const TSharedPtr<IPropertyHandle> ChildHandler = ContainerHandle->GetChildHandle(i);

		if (!ChildHandler.IsValid()) continue;

		ChildrenBuilder.AddCustomRow(FText::FromString(FString::Printf(TEXT("Index [%d]"), i)))
		.NameContent()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				.Text(FText::FromString(FString::Printf(TEXT("Index [ "))))
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.Text(FText::FromString(FString::Printf(TEXT("%d"), i)))
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock)
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				.Text(FText::FromString(FString::Printf(TEXT(" ]"))))
			]
		]
		.ValueContent()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(1)
			.VAlign(VAlign_Center)
			[
				SNew(SObjectPropertyEntryBox)
				.PropertyHandle(ChildHandler)
				.DisplayUseSelected(false)
				.AllowCreate(false)
				.AllowedClass(GetCurrentClassFilter())
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SComboButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.HasDownArrow(true)
				.OnGetMenuContent_Lambda([this, i]()
				{
					return MakeElementMenuContent(i);
				})
			]
		];
	}
}

TSharedRef<SWidget> FActorContainerCustomization::MakeFilterDropdown()
{
	if (bIsFilterLocked)
	{
		return StaticCastSharedRef<SWidget>(
			SNew(STextBlock)
			.Font(IDetailLayoutBuilder::GetDetailFont())
			.ColorAndOpacity(FSlateColor::UseSubduedForeground())
			.Text(FText::FromString(
				FString::Printf(
					TEXT("Locked As: %s"),
					*GetCurrentClassFilter()->GetName()))));
	}

	return ClassTypeHandle->CreatePropertyValueWidget(false);
}

TSharedRef<SWidget> FActorContainerCustomization::MakeContainerMenuContent()
{
	FMenuBuilder MenuBuilder(true, nullptr);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("AddElementName", "Add"),
		LOCTEXT("AddElementTooltip", "Add Element"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icon.Plus"),
		FUIAction(FExecuteAction::CreateLambda([this]()
		{
			ExecuteAction(
				&FActorContainerCustomization::AddItemToContainer,
				LOCTEXT("AddItemToContainer", "Add Item"));
		}))
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("DeleteAllName", "Delete"),
		LOCTEXT("DeleteAllTooltip", "Removes all Elements"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icon.Delete"),
		FUIAction(FExecuteAction::CreateLambda([this]()
		{
			ExecuteAction(
				&FActorContainerCustomization::EmptyContainer,
				LOCTEXT("EmptyContainer", "Empty"));
		}))
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("CleanNullsName", "Clean"),
		LOCTEXT("CleanNullsTooltip", "Removes all None Elements"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icon.Filter"),
		FUIAction(FExecuteAction::CreateLambda([this]()
		{
			ExecuteAction(
				&FActorContainerCustomization::CleanNullsInContainer,
				LOCTEXT("CleanNullsInContainer", "Clean"));
		}))
		);

	return MenuBuilder.MakeWidget();
}

TSharedRef<SWidget> FActorContainerCustomization::MakeElementMenuContent(const uint32 ItemIndex)
{
	FMenuBuilder MenuBuilder(true, nullptr);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("DeleteElementName", "Delete"),
		LOCTEXT("DeleteElementTooltip", "Removes element"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icon.Delete"),
		FUIAction(FExecuteAction::CreateLambda([this, ItemIndex]()
		{
			ExecuteAction(
				&FActorContainerCustomization::RemoveItemFromContainer,
				LOCTEXT("RemoveItemFromContainer", "Remove Item"),
				ItemIndex);
		})));

	return MenuBuilder.MakeWidget();
}

void FActorContainerCustomization::CleanNullsInContainer()
{
	TArray<uint32> InIndexesArray;
	GetNullItemsIndex(InIndexesArray);
	RemoveItemsFromContainer(InIndexesArray);
}

void FActorContainerCustomization::DragAndDropActors(const TSharedPtr<FActorDragDropOp>& ActorsOperation)
{
	UClass* FilterClass = GetCurrentClassFilter();
	for (TWeakObjectPtr<AActor> WeakActor : ActorsOperation->Actors)
	{
		if (AActor* Actor = WeakActor.Get())
		{
			if (Actor->IsA(FilterClass))
			{
				AddActorToContainer(Actor);
			}
		}
	}
}

void FActorContainerCustomization::OnFilterChanged()
{
	if (bIsFilterLocked) return;
	if (bIsReverting)
	{
		bIsReverting = false;
		return;
	}
	
	UObject* NewClassFilter{nullptr};
	ClassTypeHandle->GetValue(NewClassFilter);
	if (NewClassFilter == nullptr)
	{
		ClassTypeHandle->SetValue(GetCurrentClassFilter());
		return;
	}

	const UClass* ClassType = GetCurrentClassFilter();

	TArray<uint32> InvalidActorsIndexes;

	GetInvalidItemsIndex(InvalidActorsIndexes, ClassType);

	if (InvalidActorsIndexes.Num() == 0) return;

	if (InvalidActorsIndexes.Num() >= 25)
	{
		const FText Message = FText::Format(
			LOCTEXT(
				"FilterChangeOverflow",
				"{0} elements don't match the new filter and will be removed.\n Do you want to continue?"),
			FText::AsNumber(InvalidActorsIndexes.Num()));

		if (FMessageDialog::Open(EAppMsgType::YesNo, Message) != EAppReturnType::Yes)
		{
			bIsReverting = true;
			ClassTypeHandle->SetValue(PreviousClassType);
			return;
		}
	}

	GEditor->BeginTransaction(LOCTEXT("CleaningFilter", "Filter Change Cleanup"));
	
	RemoveItemsFromContainer(InvalidActorsIndexes);

	GEditor->EndTransaction();

	PropertyUtilities->RequestForceRefresh();
}

void FActorContainerCustomization::OnFilterPreChanged()
{
	if (bIsReverting || bIsFilterLocked) return;
	PreviousClassType = GetCurrentClassFilter();
}

UClass* FActorContainerCustomization::GetCurrentClassFilter() const
{
	UObject* Class{nullptr};
	ClassTypeHandle->GetValue(Class);
	if (Class == nullptr) return AActor::StaticClass();
	return Cast<UClass>(Class);
}


#undef LOCTEXT_NAMESPACE
