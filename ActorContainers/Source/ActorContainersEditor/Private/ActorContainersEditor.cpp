
#include "ActorContainersEditor.h"

#include "WidgetCustomization/FActorArrayCustomization.h"
#include "PropertyEditorModule.h"
#include "ActorContainers/FActorSet.h"
#include "WidgetCustomization/FActorSetCustomization.h"
#include "ActorContainers/FActorArray.h"

#define LOCTEXT_NAMESPACE "FActorContainersEditorModule"

void FActorContainersEditorModule::StartupModule()
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

void FActorContainersEditorModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.UnregisterCustomPropertyTypeLayout(FActorSet::StaticStruct()->GetFName());
		PropertyModule.UnregisterCustomPropertyTypeLayout(FActorArray::StaticStruct()->GetFName());
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FActorContainersEditorModule, ActorContainersEditor)