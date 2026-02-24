#pragma once

#include "FActorSet.generated.h"

USTRUCT(BlueprintType)
struct WORKFLOWUTILS_API FActorSet
{
	GENERATED_BODY()

	// Ensures that an ActorSet never has a null filter.
	explicit FActorSet(UClass* Class = AActor::StaticClass())
		: ActorClass(Class != nullptr ? Class : AActor::StaticClass()) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lists")
	TSubclassOf<AActor> ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lists")
	TSet<TObjectPtr<AActor>> ActorsSet;

	/**
	 * Add a new actor to the set
	 * @param Actor 
	 */
	void Add(AActor* Actor)
	{
		ActorsSet.Add(Actor);
	}

	/**
	 * Remove an actor in the set
	 * @param Actor 
	 */
	int Remove(AActor* Actor)
	{
		return ActorsSet.Remove(Actor);
	}

	/**
	 * Returns true is the actor given is in the set
	 * @param Actor 
	 * @return bool
	 */
	bool Contains(const AActor* Actor) const
	{
		return ActorsSet.Contains(Actor);
	}

	/**
	 * Returns the number of elements in the list
	 * @return int32
	 */
	int32 Num() const
	{
		return ActorsSet.Num();
	}

	/**
	 * Removes all the elements in the list
	**/
	void Empty()
	{
		ActorsSet.Empty();
	}

	/**
	 * Returns whether the list has any elements
	 * @return bool
	 */
	bool IsEmpty() const
	{
		return ActorsSet.Num() == 0;
	}

	auto begin() {return ActorsSet.begin();}
	auto end() {return ActorsSet.end();}
	auto begin() const {return ActorsSet.begin();}
	auto end() const {return ActorsSet.end();}
	
};
