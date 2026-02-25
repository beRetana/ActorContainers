
#include "WidgetCustomization/FActorArrayCustomization.h"
#include "ActorContainers/FActorArray.h"

#define LOCTEXT_NAMESPACE "WorkflowUtilsEditor"

TSharedRef<IPropertyTypeCustomization> FActorArrayCustomization::MakeInstance()
{
	return MakeShared<FActorArrayCustomization>();
}

void FActorArrayCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle,
	FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	ArrayHandle = StructPropertyHandle->GetChildHandle(
		GET_MEMBER_NAME_CHECKED(FActorArray, ActorsArray))->AsArray();
	
	BuildHeader(
		StructPropertyHandle,
		HeaderRow,
		StructCustomizationUtils,
		GET_MEMBER_NAME_CHECKED(FActorArray, ActorClass));
}

void FActorArrayCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle,
	IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	BuildChildren(
		StructPropertyHandle,
		StructBuilder,
		GET_MEMBER_NAME_CHECKED(FActorArray, ActorsArray));
}

FText FActorArrayCustomization::UpdateItemCount()
{
	uint32 ArrayLength{0};
	ArrayHandle->GetNumElements(ArrayLength);
	return FText::Format(
		LOCTEXT("ContainerSize", "{0} Array elements"),
		ArrayLength);
}

void FActorArrayCustomization::AddItemToContainer()
{
	ArrayHandle->AddItem();
}

void FActorArrayCustomization::AddActorToContainer(AActor* ActorToAdd)
{
	uint32 ArrayLength{0};
	
	ArrayHandle->GetNumElements(ArrayLength);

	AddItemToContainer();

	uint32 ArrayNewLength{0};
	ArrayHandle->GetNumElements(ArrayNewLength);

	if (ArrayNewLength > ArrayLength) // In case the add function fails
		ArrayHandle->GetElement(ArrayNewLength-1)->SetValue(ActorToAdd);
}

void FActorArrayCustomization::RemoveItemFromContainer(const uint32 ItemIndex)
{
	ArrayHandle->DeleteItem(ItemIndex);
}

void FActorArrayCustomization::EmptyContainer()
{
	ArrayHandle->EmptyArray();
}

void FActorArrayCustomization::GetInvalidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass)
{
	uint32 ArrayLength{0};
	ArrayHandle->GetNumElements(ArrayLength);
	for (uint32 i = 0; i < ArrayLength; ++i)
	{
		UObject* Element{nullptr};
		ArrayHandle->GetElement(i)->GetValue(Element);

		if (Element != nullptr && !Element->IsA(FilterClass))
		{
			InIndexesArray.AddUnique(i);
		}
	}
}

void FActorArrayCustomization::GetValidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass)
{
	uint32 ArrayLength{0};
	ArrayHandle->GetNumElements(ArrayLength);
	
	for (uint32 i = 0; i < ArrayLength; ++i)
	{
		UObject* Element{nullptr};
		ArrayHandle->GetElement(i)->GetValue(Element);

		if (Element != nullptr && Element->IsA(FilterClass))
		{
			InIndexesArray.AddUnique(i);
		}
	}
}

void FActorArrayCustomization::GetNullItemsIndex(TArray<uint32>& InIndexesArray)
{
	uint32 SetSize{0};
	ArrayHandle->GetNumElements(SetSize);
	
	for (uint32 i = 0; i < SetSize; ++i)
	{
		UObject* Element{nullptr};
		ArrayHandle->GetElement(i)->GetValue(Element);

		if (Element == nullptr)
		{
			InIndexesArray.AddUnique(i);
		}
	}
}

void FActorArrayCustomization::RemoveItemsFromContainer(TArray<uint32>& InIndexesArray)
{
	for (int32 i = InIndexesArray.Num() - 1; i >= 0; --i)
	{
		ArrayHandle->DeleteItem(InIndexesArray[i]);
	}
}

#undef LOCTEXT_NAMESPACE
