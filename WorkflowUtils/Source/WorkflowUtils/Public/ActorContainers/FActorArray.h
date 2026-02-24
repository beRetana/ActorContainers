#pragma once

#include "FActorArray.generated.h"

USTRUCT(BlueprintType)
struct WORKFLOWUTILS_API FActorArray
{
	GENERATED_BODY()

	// Ensures that an ActorArray never has a null filter. 
	explicit FActorArray(UClass* Class = AActor::StaticClass())
		: ActorClass((Class != nullptr) ? Class : AActor::StaticClass()) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Array")
	TSubclassOf<AActor> ActorClass{AActor::StaticClass()};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Array")
	TArray<TObjectPtr<AActor>> ActorsArray;

	/**
	 * Takes in an actor pointer and adds it to the array.
	 * @param Actor 
	 */
	void Add(AActor* Actor)
	{
		ActorsArray.Add(Actor);
	}

	/**
	 * Checks if the array contains the element given
	 * @param Actor 
	 * @return True if the element is in the array, False otherwise.
	 */
	bool Contains(AActor* Actor) const
	{
		return ActorsArray.Contains(Actor);
	}

	/**
	 * Takes in an actor, searches for it in the array and removes it.
	 * @param Actor 
	 */
	void Remove(AActor* Actor)
	{
		ActorsArray.Remove(Actor);
	}

	/**
	 * Removes an element at the position given
	 * @param Index
	 */
	void RemoveAt(int Index)
	{
		ActorsArray.RemoveAt(Index);
	}
	
	/**
	 * Empties the array.
	 */
	void Empty()
	{
		ActorsArray.Empty();
	}

	/**
	 * Counts the size of the array.
	 * @return The size of the array as an int.
	 */
	int Num() const
	{
		return ActorsArray.Num();
	}

	/**
	 * Checks if the array is empty
	 * @return True if the array is empty and False otherwise
	 */
	bool IsEmpty() const
	{
		return ActorsArray.IsEmpty();
	}

	auto begin(){return ActorsArray.begin();}
	auto end(){return ActorsArray.end();}
	auto begin() const{return ActorsArray.begin();}
	auto end() const{return ActorsArray.end();}
};
