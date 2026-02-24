#pragma once

#include "ActorCollections/FActorSet.h"
#include "ActorCollections/FActorArray.h"
#include "WorkflowUtilsFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class WORKFLOWUTILS_API UWorkflowUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
	
public:

	GENERATED_BODY()

	/**
	 * Checks the actor is a type of the filter given.
	 * @param InActor Actor to check.
	 * @param InClass Filter used to check if the actor is valid.
	 * @return True if the Actor is a type of the filter given.
	 */
	static bool IsValidType(const AActor* InActor, const TSubclassOf<AActor>& InClass);

	/**
	 * Adds the actor into the set by reference if it passes the filter.
	 * @param InActorSet Set passed by reference that might have the actor added to it.
	 * @param InActor Actor that might be added to the set.
	 */
	UFUNCTION(BlueprintCallable, Category = "_Workflow Utilities|ActorContainers|ActorSet")
	static void Push(UPARAM(ref) FActorSet& InActorSet, AActor* InActor);

	/**
	 * Eliminates the actor given returning the index it was found at.
	 * @param InActorSet The ActorSet the actor is being removed from.
	 * @param InActor The Actor being removed from the set.
	 * @return The index at which the element was found.
	 */
	UFUNCTION(BlueprintCallable, Category = "_Workflow Utilities|ActorContainers|ActorSet")
	static int PopElement(UPARAM(ref) FActorSet& InActorSet, AActor* InActor);

	/**
	 * Empties the ActorSet given.
	 * @param InActorSet 
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|ActorContainers|ActorSet")
	static void EmptySet(UPARAM(ref) FActorSet& InActorSet);

	/**
	 * Checks if the Actor given is in the ActorSet.
	 * @param InActorSet The ActorSet checked.
	 * @param InActor The Actor being checked for in the ActorSet.
	 * @return True if the Actor given is in the ActorSet False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|ActorContainers|ActorSet")
	static bool ContainsSet(UPARAM(ref) FActorSet& InActorSet, const AActor* InActor);

	/**
	 * Creates a new empty ActorSet and returns it.
	 * @param ClassFilter The default filter the ActorSet should have.
	 * @return A new empty ActorSet.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|ActorContainers|ActorSet")
	static FActorSet MakeActorSet(const TSubclassOf<AActor> ClassFilter = nullptr);

	/**
	 * Adds the given Actor if it passes the filter in the ActorArray.
	 * @param InActorArray The ActorArray the actor is being added to.
	 * @param InActor The actor added to the ActorArray.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|SmartTypes|SmartArray")
	static void Add(UPARAM(ref) FActorArray& InActorArray, AActor* InActor);

	/**
	 * Removes the given actor from the ActorArray if it exists in it.
	 * @param InActorArray The ActorArray the actor is being removed from.
	 * @param InActor The actor to be removed from the ActorArray.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|SmartTypes|SmartArray")
	static void Remove(UPARAM(ref) FActorArray& InActorArray, AActor* InActor);

	/**
	 * Removed the actor at the given index from the given ActorArray.
	 * @param InActorArray The ActorArray the actor is being removed from.
	 * @param InIndex The index to look at when removing the actor.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|SmartTypes|SmartArray")
	static void RemoveAt(UPARAM(ref) FActorArray& InActorArray, int InIndex);

	/**
	 * Empties the ActorArray given.
	 * @param InActorArray The ActorArray to be emptied.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|SmartTypes|SmartArray")
	static void EmptyArray(UPARAM(ref) FActorArray& InActorArray);

	/**
	 * Checks in the given ActorArray if the given actor is in it.
	 * @param InActorArray The ActorArray to be checked. 
	 * @param InActor The actor to be looked for in the ActorArray.
	 * @return True if the actor is in the ActorArray, False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|SmartTypes|SmartArray")
	static bool ContainsArray(UPARAM(ref) FActorArray& InActorArray, AActor* InActor);

	/**
	 * Creates an empty ActorArray and returns it.
	 * @param ClassFilter The filter the ActorArray should have.
	 * @return An empty ActorArray
	 */
	UFUNCTION(BlueprintCallable, Category = "Workflow Utilities|SmartTypes|SmartArray")
	static FActorArray MakeActorArray(const TSubclassOf<AActor> ClassFilter = nullptr);
};
