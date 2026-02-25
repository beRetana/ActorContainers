#pragma once

#include "CoreMinimal.h"
#include "IPropertyUtilities.h"
#include "IPropertyTypeCustomization.h"

class FActorDragDropOp;
class IPropertyHandle;

/* Manages the custom widgets used to display the properties
 * on the details panel. Allows inheritance for multiple types
 * of containers avoiding code duplication.
 */
class FActorContainerCustomization : public IPropertyTypeCustomization
{
protected:

	TSharedPtr<IPropertyHandle> ClassTypeHandle{nullptr};

	TSharedPtr<IPropertyUtilities> PropertyUtilities{nullptr};

	UClass* PreviousClassType{nullptr};

	bool bIsReverting{false};

	bool bIsFilterLocked{false};

protected:
	/**
	 * Creates the structure for the widget and caches information from the property.
	 * @param PropertyHandle 
	 * @param HeaderRow 
	 * @param TypeUtils 
	 * @param ClassTypePropertyName 
	 */
	virtual void BuildHeader(
		TSharedRef<IPropertyHandle>& PropertyHandle,
		FDetailWidgetRow& HeaderRow,
		IPropertyTypeCustomizationUtils& TypeUtils,
		const FName ClassTypePropertyName);

	/**
	 * Creates a custom widget display to avoid displaying nested list behaviour,
	 * shows the elements in the containers of our wrappers.
	 * @param PropertyHandle 
	 * @param ChildrenBuilder 
	 * @param ContainerPropertyName 
	 */
	virtual void BuildChildren(
		TSharedRef<IPropertyHandle>& PropertyHandle,
		IDetailChildrenBuilder& ChildrenBuilder,
		const FName ContainerPropertyName);

	/**
	 * Creates a static text widget or a dropdown for the class filter property.
	 * @return Returns a static text if the filter is locked, and a dropdown otherwise.
	 */
	virtual TSharedRef<SWidget> MakeFilterDropdown();

	/**
	 * Creates a custom menu with buttons for functionalities of the containers.
	 * @return A custom menu widget
	 */
	virtual TSharedRef<SWidget> MakeContainerMenuContent();

	/**
	 * Created a custom widget for the row of an element in the container.
	 * @param ItemIndex The index position of the element in the container.
	 * @return Custom widget for elements.
	 */
	virtual TSharedRef<SWidget> MakeElementMenuContent(const uint32 ItemIndex);

	/**
	 * Ensures AActor as the default filter, and removes all elements
	 * from the container that do not pass the new filter selected.
	 */
	void OnFilterChanged();

	/**
	 * Caches information and checks states for a valid change
	 * enabling rollbacks in case of cancellation.
	 */
	void OnFilterPreChanged();

	/**
	 * Helper function to execute actions on the container through
	 * transactions and force refresh to ensure updating the UI displayed
	 * and enabling undo capabilities.
	 * @tparam Func Any function pointer
	 * @tparam Args Any argument type.
	 * @param Function MUST be a member function of FActorContainerCustomization.
	 * @param TransactionName The name used to identify the transaction.
	 * @param Arguments A sequence of arguments to be placed in the given Function
	 * @return FReply::Handled
	 */
	template<typename Func, typename... Args>
	FReply ExecuteAction(Func Function, const FText TransactionName, Args&&... Arguments)
	{
		GEditor->BeginTransaction(TransactionName);
		(this->*Function)(std::forward<Args>(Arguments)...);
		GEditor->EndTransaction();
		
		if (PropertyUtilities.IsValid())
		{
			PropertyUtilities->ForceRefresh();
		}
		return FReply::Handled();
	}

	/**
	 * Helper function that reads for the current class filter,
	 * if the current class filter is null then it will return AActor::StaticClass()
	 * @return UClass for the current value or AActor as default.
	 */
	UClass* GetCurrentClassFilter() const;

	/**
	 * Removes all the null/None elements in the container.
	 */
	void CleanNullsInContainer();

	/**
	 * Takes in an ActorsOperation checks for comparability and
	 * adds valid actors into the container.
	 * @param ActorsOperation 
	 */
	void DragAndDropActors(const TSharedPtr<FActorDragDropOp>& ActorsOperation);

	// Functions to be implemented by each container implementation
	
	virtual FText UpdateItemCount() = 0;

	virtual void AddItemToContainer() = 0;

	virtual void AddActorToContainer(AActor* ActorToAdd) = 0;

	virtual void RemoveItemFromContainer(const uint32 ItemIndex = 0) = 0;

	virtual void EmptyContainer() = 0;

	virtual void GetInvalidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass = nullptr) = 0;

	virtual void GetValidItemsIndex(TArray<uint32>& InIndexesArray, const UClass* FilterClass = nullptr) = 0;

	virtual void GetNullItemsIndex(TArray<uint32>& InIndexesArray) = 0;

	virtual void RemoveItemsFromContainer(TArray<uint32>& InIndexesArray) = 0;
	
};
