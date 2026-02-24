#pragma once
#include "FActorContainerCustomization.h"

class FActorArrayCustomization final : public FActorContainerCustomization
{
public:
	/**
	 * Factory method necessary by Unreal's System
	 * @return New instance of this class
	 */
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle,
		FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle,
		IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

protected:

	virtual FText UpdateItemCount() override;

	virtual void AddItemToContainer() override;

	virtual void AddActorToContainer(AActor* ActorToAdd) override;

	virtual void RemoveItemFromContainer(const uint32 ItemIndex) override;

	virtual void EmptyContainer() override;

	virtual void GetInvalidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass = nullptr) override;

	virtual void GetValidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass = nullptr) override;

	virtual void GetNullItemsIndex(TArray<uint32>& InIndexesArray) override;
	
	virtual void RemoveItemsFromContainer(TArray<uint32>& InIndexesArray) override;

protected:

	TSharedPtr<IPropertyHandleArray> ArrayHandle;
};
