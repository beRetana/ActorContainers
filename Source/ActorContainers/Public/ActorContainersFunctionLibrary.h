#pragma once

#include "ActorContainers/FActorSet.h"
#include "ActorContainers/FActorArray.h"
#include "ActorContainersFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class ACTORCONTAINERS_API UActorContainersFunctionLibrary : public UBlueprintFunctionLibrary
{
	
public:

	GENERATED_BODY()

	/**
	 * Checks the actor is a type of the filter given.
	 * @param InActor Actor to check.
	 * @param InClass Filter used to check if the actor is valid.
	 * @return True if the Actor is a type of the filter given.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers")
	static bool IsValidType(const AActor* InActor, const TSubclassOf<AActor>& InClass);

	/**
	 * Transfers all the actors from the ActorSet into another set.
	 * @param InActorSet ActorSet with the information to transfer
	 * @param OutActors Set to be filled with the information
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static void GetAllActorsFromSet(UPARAM(ref) FActorSet& InActorSet, UPARAM(ref) TSet<AActor*>& OutActors);

	/**
	 * Remove all the elements that are null in the set.
	 * @param InActorSet The ActorSet to be cleaned.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static void CleanNullsFromSet(UPARAM(ref) FActorSet& InActorSet);

	/**
	 * Transfers Actors from the InActorSet into the OutActorSet.
	 * @tparam T A type derived from AActor
	 * @param InActorSet The Set with the information
	 * @param OutActorSet The Set information will be transferred to.
	 */
	template<typename T>
	static void GetAllActorsFromSet(FActorSet& InActorSet, TSet<T*>& OutActorSet)
	{
		static_assert(TIsDerivedFrom<T, AActor>::Value, "Actor should be derived from AActor");

		for (auto Actor : InActorSet)
		{
			if (Actor->IsA(T::StaticClass()))
			{
				OutActorSet.Add(Actor);
			}
		}

		InActorSet.Empty();
	}

	/**
	 * Adds the actor into the set by reference if it passes the filter.
	 * @param InActorSet Set passed by reference that might have the actor added to it.
	 * @param InActor Actor that might be added to the set.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static void Push(UPARAM(ref) FActorSet& InActorSet, AActor* InActor);

	/**
	 * Eliminates the actor given returning the index it was found at.
	 * @param InActorSet The ActorSet the actor is being removed from.
	 * @param InActor The Actor being removed from the set.
	 * @return The index at which the element was found.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static int PopElement(UPARAM(ref) FActorSet& InActorSet, AActor* InActor);

	/**
	 * Empties the ActorSet given.
	 * @param InActorSet 
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static void EmptySet(UPARAM(ref) FActorSet& InActorSet);

	/**
	 * Checks if the Actor given is in the ActorSet.
	 * @param InActorSet The ActorSet checked.
	 * @param InActor The Actor being checked for in the ActorSet.
	 * @return True if the Actor given is in the ActorSet False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static bool ContainsSet(UPARAM(ref) FActorSet& InActorSet, const AActor* InActor);

	/**
	 * Creates a new empty ActorSet and returns it.
	 * @param ClassFilter The default filter the ActorSet should have.
	 * @return A new empty ActorSet.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorSet")
	static FActorSet MakeActorSet(const TSubclassOf<AActor> ClassFilter = nullptr);

	/**
	 * Transfers the Actors in InActorArray to OutActors
	 * @param InActorArray The array with the Actors to transfer
	 * @param OutActors The array to transfers the Actors to
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static void GetAllActorsFromArray(UPARAM(ref) FActorArray& InActorArray, UPARAM(ref) TArray<AActor*>& OutActors);

	/**
	 * Transfers the Actors in InActorArray to OutActors
	 * @tparam T Must derive from AActor
	 * @param InActorArray The array with the Actors to transfer
	 * @param OutActors The array to transfers the Actors to
	 */
	template<typename T>
	static void GetAllActorsFromArray(FActorArray& InActorArray, TArray<T>& OutActors)
	{
		static_assert(TIsDerivedFrom<T, AActor>::Value, "Actor should be derived");
		OutActors.Reserve(InActorArray.Num() + OutActors.Num());
		for (auto& Actor : InActorArray)
		{
			if (Actor->IsA(T::StaticClass()))
			{
				OutActors.Add(Actor);
			}
		}
		InActorArray.Empty();
	}

	/**
	 * Removes all the Null pointers in the array.
	 * @param InActorArray Array to be cleaned
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static void CleanNullsFromArray(UPARAM(ref) FActorArray& InActorArray);
	
	/**
	 * Adds the given Actor if it passes the filter in the ActorArray.
	 * @param InActorArray The ActorArray the actor is being added to.
	 * @param InActor The actor added to the ActorArray.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static void Add(UPARAM(ref) FActorArray& InActorArray, AActor* InActor);

	/**
	 * Removes the given actor from the ActorArray if it exists in it.
	 * @param InActorArray The ActorArray the actor is being removed from.
	 * @param InActor The actor to be removed from the ActorArray.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static void Remove(UPARAM(ref) FActorArray& InActorArray, AActor* InActor);

	/**
	 * Removed the actor at the given index from the given ActorArray.
	 * @param InActorArray The ActorArray the actor is being removed from.
	 * @param InIndex The index to look at when removing the actor.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static void RemoveAt(UPARAM(ref) FActorArray& InActorArray, int InIndex);

	/**
	 * Empties the ActorArray given.
	 * @param InActorArray The ActorArray to be emptied.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static void EmptyArray(UPARAM(ref) FActorArray& InActorArray);

	/**
	 * Checks in the given ActorArray if the given actor is in it.
	 * @param InActorArray The ActorArray to be checked. 
	 * @param InActor The actor to be looked for in the ActorArray.
	 * @return True if the actor is in the ActorArray, False otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static bool ContainsArray(UPARAM(ref) FActorArray& InActorArray, AActor* InActor);

	/**
	 * Creates an empty ActorArray and returns it.
	 * @param ClassFilter The filter the ActorArray should have.
	 * @return An empty ActorArray
	 */
	UFUNCTION(BlueprintCallable, Category = "ActorContainers|ActorArray")
	static FActorArray MakeActorArray(const TSubclassOf<AActor> ClassFilter = nullptr);
};
