#include "ActorContainersFunctionLibrary.h"

bool UActorContainersFunctionLibrary::IsValidType(const AActor* InActor, const TSubclassOf<AActor>& InClass)
{
	return InActor->IsA(InClass);
}

void UActorContainersFunctionLibrary::GetAllActorsFromSet(FActorSet& InActorSet, TSet<AActor*>& OutActors)
{
	OutActors.Reserve(InActorSet.Num() + OutActors.Num());

	for (TObjectPtr<AActor>& Actor : InActorSet)
	{
		OutActors.Add(Actor);
	}

	InActorSet.Empty();
}

void UActorContainersFunctionLibrary::CleanNullsFromSet(FActorSet& InActorSet)
{
	InActorSet.Remove(nullptr);
}

void UActorContainersFunctionLibrary::Push(FActorSet& InActorSet, AActor* InActor)
{
	if (IsValidType(InActor, InActorSet.ActorClass))
	{
		InActorSet.Add(InActor);
	}
}

int UActorContainersFunctionLibrary::PopElement(FActorSet& InActorSet, AActor* InActor)
{
	if (IsValidType(InActor, InActorSet.ActorClass))
	{
		return InActorSet.Remove(InActor);
	}
	return 0;
}

void UActorContainersFunctionLibrary::EmptySet(FActorSet& InActorSet)
{
	InActorSet.Empty();
}

bool UActorContainersFunctionLibrary::ContainsSet(FActorSet& InActorSet, const AActor* InActor)
{
	if (IsValidType(InActor, InActorSet.ActorClass))
	{
		return InActorSet.Contains(InActor);
	}
	return false;
}

FActorSet UActorContainersFunctionLibrary::MakeActorSet(const TSubclassOf<AActor> ClassFilter)
{
	return FActorSet{ClassFilter};
}

void UActorContainersFunctionLibrary::GetAllActorsFromArray(FActorArray& InActorArray, TArray<AActor*>& OutActors)
{
	OutActors.Reserve(InActorArray.Num() + OutActors.Num());

	for (auto& Element : InActorArray)
	{
		OutActors.Add(Element);
	}

	InActorArray.Empty();
}

void UActorContainersFunctionLibrary::CleanNullsFromArray(FActorArray& InActorArray)
{
	for (TObjectPtr<AActor>& Actor : InActorArray)
	{
		if (Actor != nullptr) continue;
		InActorArray.Remove(Actor);
	}
}

void UActorContainersFunctionLibrary::Add(FActorArray& InActorArray, AActor* InActor)
{
	if (IsValidType(InActor, InActorArray.ActorClass))
	{
		InActorArray.Add(InActor);
	}
}

void UActorContainersFunctionLibrary::Remove(FActorArray& InActorArray, AActor* InActor)
{
	InActorArray.Remove(InActor);
}

void UActorContainersFunctionLibrary::RemoveAt(FActorArray& InActorArray, int InIndex)
{
	InActorArray.RemoveAt(InIndex);
}

void UActorContainersFunctionLibrary::EmptyArray(FActorArray& InActorArray)
{
	InActorArray.Empty();
}

bool UActorContainersFunctionLibrary::ContainsArray(FActorArray& InActorArray, AActor* InActor)
{
	if (IsValidType(InActor, InActorArray.ActorClass))
	{
		return InActorArray.Contains(InActor);
	}
	return false;
}

FActorArray UActorContainersFunctionLibrary::MakeActorArray(const TSubclassOf<AActor> ClassFilter)
{
	return FActorArray{ClassFilter};
}




