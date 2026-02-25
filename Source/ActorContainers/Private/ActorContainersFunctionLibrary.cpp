#include "ActorContainersFunctionLibrary.h"

bool UActorContainersFunctionLibrary::IsValidType(const AActor* InActor, const TSubclassOf<AActor>& InClass)
{
	return InActor->IsA(InClass);
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




