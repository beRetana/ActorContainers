#include "WorkflowUtilsFunctionLibrary.h"

bool UWorkflowUtilsFunctionLibrary::IsValidType(const AActor* InActor, const TSubclassOf<AActor>& InClass)
{
	return InActor->IsA(InClass);
}

void UWorkflowUtilsFunctionLibrary::Push(FActorSet& InActorSet, AActor* InActor)
{
	if (IsValidType(InActor, InActorSet.ActorClass))
	{
		InActorSet.Add(InActor);
	}
}

int UWorkflowUtilsFunctionLibrary::PopElement(FActorSet& InActorSet, AActor* InActor)
{
	if (IsValidType(InActor, InActorSet.ActorClass))
	{
		return InActorSet.Remove(InActor);
	}
	return 0;
}

void UWorkflowUtilsFunctionLibrary::EmptySet(FActorSet& InActorSet)
{
	InActorSet.Empty();
}

bool UWorkflowUtilsFunctionLibrary::ContainsSet(FActorSet& InActorSet, const AActor* InActor)
{
	if (IsValidType(InActor, InActorSet.ActorClass))
	{
		return InActorSet.Contains(InActor);
	}
	return false;
}

FActorSet UWorkflowUtilsFunctionLibrary::MakeActorSet(const TSubclassOf<AActor> ClassFilter)
{
	return FActorSet{ClassFilter};
}

void UWorkflowUtilsFunctionLibrary::Add(FActorArray& InActorArray, AActor* InActor)
{
	if (IsValidType(InActor, InActorArray.ActorClass))
	{
		InActorArray.Add(InActor);
	}
}

void UWorkflowUtilsFunctionLibrary::Remove(FActorArray& InActorArray, AActor* InActor)
{
	InActorArray.Remove(InActor);
}

void UWorkflowUtilsFunctionLibrary::RemoveAt(FActorArray& InActorArray, int InIndex)
{
	InActorArray.RemoveAt(InIndex);
}

void UWorkflowUtilsFunctionLibrary::EmptyArray(FActorArray& InActorArray)
{
	InActorArray.Empty();
}

bool UWorkflowUtilsFunctionLibrary::ContainsArray(FActorArray& InActorArray, AActor* InActor)
{
	if (IsValidType(InActor, InActorArray.ActorClass))
	{
		return InActorArray.Contains(InActor);
	}
	return false;
}

FActorArray UWorkflowUtilsFunctionLibrary::MakeActorArray(const TSubclassOf<AActor> ClassFilter)
{
	return FActorArray{ClassFilter};
}




