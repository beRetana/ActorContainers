
#include "WorkflowUtilsEditor.h"

#include "FActorArrayCustomization.h"
#include "PropertyEditorModule.h"
#include "ActorCollections/FActorSet.h"
#include "FActorSetCustomization.h"
#include "ActorCollections/FActorArray.h"

#define LOCTEXT_NAMESPACE "FWorkflowUtilsEditorModule"

void FWorkflowUtilsEditorModule::StartupModule()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(
		FActorSet::StaticStruct()->GetFName(),
		FOnGetPropertyTypeCustomizationInstance::CreateStatic(
			&FActorSetCustomization::MakeInstance
			));

	PropertyModule.RegisterCustomPropertyTypeLayout(
		FActorArray::StaticStruct()->GetFName(),
		FOnGetPropertyTypeCustomizationInstance::CreateStatic(
			&FActorArrayCustomization::MakeInstance
			));
	
}

void FWorkflowUtilsEditorModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.UnregisterCustomPropertyTypeLayout(FActorSet::StaticStruct()->GetFName());
		PropertyModule.UnregisterCustomPropertyTypeLayout(FActorArray::StaticStruct()->GetFName());
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FWorkflowUtilsEditorModule, WorkflowUtilsEditor)