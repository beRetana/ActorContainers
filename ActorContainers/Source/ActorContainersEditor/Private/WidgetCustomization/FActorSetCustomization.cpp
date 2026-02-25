
#include "WidgetCustomization/FActorSetCustomization.h"
#include "ActorContainers/FActorSet.h"
#include "PropertyHandle.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"
#include "Styling/AppStyle.h"
#include "GameFramework/Actor.h"

#define LOCTEXT_NAMESPACE "FActorSetCustomization"


TSharedRef<IPropertyTypeCustomization> FActorSetCustomization::MakeInstance()
{
	return MakeShared<FActorSetCustomization>();
}

void FActorSetCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	SetHandle = StructPropertyHandle->GetChildHandle(
		GET_MEMBER_NAME_CHECKED(FActorSet, ActorsSet))->AsSet();
	
	BuildHeader(
		StructPropertyHandle,
		HeaderRow,
		StructCustomizationUtils,
		GET_MEMBER_NAME_CHECKED(FActorSet, ActorClass));
}

void FActorSetCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	BuildChildren(
		StructPropertyHandle,
		StructBuilder,
		GET_MEMBER_NAME_CHECKED(FActorSet, ActorsSet));
}

FText FActorSetCustomization::UpdateItemCount()
{
	uint32 SetSize{0};
	SetHandle->GetNumElements(SetSize);
	return FText::Format(
		LOCTEXT("ContainerSize", "{0} Set elements"),
		FText::AsNumber(SetSize));
}

void FActorSetCustomization::AddItemToContainer()
{
	SetHandle->AddItem();
}

void FActorSetCustomization::AddActorToContainer(AActor* ActorToAdd)
{
	uint32 SetLength{0};
	SetHandle->GetNumElements(SetLength);
	
	AddItemToContainer();
	
	uint32 SetNewLength{0};
	SetHandle->GetNumElements(SetNewLength);

	if (SetNewLength > SetLength) // in case the add function fails
	{
		SetHandle->GetElement(SetNewLength-1)->SetValue(ActorToAdd);
	}
}

void FActorSetCustomization::RemoveItemFromContainer(const uint32 ItemIndex)
{
	SetHandle->DeleteItem(ItemIndex);
}

void FActorSetCustomization::EmptyContainer()
{
	SetHandle->Empty();
}

void FActorSetCustomization::GetInvalidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass)
{
	uint32 SetSize{0};
	SetHandle->GetNumElements(SetSize);
	for (uint32 i = 0; i < SetSize; ++i)
	{
		UObject* Element{nullptr};
		SetHandle->GetElement(i)->GetValue(Element);

		if (Element != nullptr && !Element->IsA(FilterClass))
		{
			InIndexesArray.AddUnique(i);
		}
	}
}

void FActorSetCustomization::GetValidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass)
{
	uint32 SetSize{0};
	SetHandle->GetNumElements(SetSize);
	for (uint32 i = 0; i < SetSize; ++i)
	{
		UObject* Element{nullptr};
		SetHandle->GetElement(i)->GetValue(Element);

		if (Element != nullptr && Element->IsA(FilterClass))
		{
			InIndexesArray.AddUnique(i);
		}
	}
}

void FActorSetCustomization::GetNullItemsIndex(TArray<uint32>& InIndexesArray)
{
	uint32 SetSize{0};
	SetHandle->GetNumElements(SetSize);
	
	for (uint32 i = 0; i < SetSize; ++i)
	{
		UObject* Element{nullptr};
		SetHandle->GetElement(i)->GetValue(Element);

		if (Element == nullptr)
		{
			InIndexesArray.AddUnique(i);
		}
	}
}

void FActorSetCustomization::RemoveItemsFromContainer(TArray<uint32>& InIndexesArray)
{
	for (int32 i = InIndexesArray.Num() - 1; i >= 0; --i)
	{
		SetHandle->DeleteItem(InIndexesArray[i]);
	}
}

#undef LOCTEXT_NAMESPACE
