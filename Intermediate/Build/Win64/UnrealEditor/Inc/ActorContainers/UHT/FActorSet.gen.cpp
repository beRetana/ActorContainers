// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorContainers/FActorSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFActorSet() {}

// ********** Begin Cross Module References ********************************************************
ACTORCONTAINERS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSet();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActorContainers();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorSet *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorSet;
class UScriptStruct* FActorSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSet, (UObject*)Z_Construct_UPackage__Script_ActorContainers(), TEXT("ActorSet"));
	}
	return Z_Registration_Info_UScriptStruct_FActorSet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorContainers/FActorSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Lists" },
		{ "ModuleRelativePath", "Public/ActorContainers/FActorSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsSet_MetaData[] = {
		{ "Category", "Lists" },
		{ "ModuleRelativePath", "Public/ActorContainers/FActorSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActorsSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorSet_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSet, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorSet_Statics::NewProp_ActorsSet_ElementProp = { "ActorsSet", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActorSet_Statics::NewProp_ActorsSet = { "ActorsSet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSet, ActorsSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsSet_MetaData), NewProp_ActorsSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSet_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSet_Statics::NewProp_ActorsSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSet_Statics::NewProp_ActorsSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorContainers,
	nullptr,
	&NewStructOps,
	"ActorSet",
	Z_Construct_UScriptStruct_FActorSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSet_Statics::PropPointers),
	sizeof(FActorSet),
	alignof(FActorSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorSet()
{
	if (!Z_Registration_Info_UScriptStruct_FActorSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorSet.InnerSingleton, Z_Construct_UScriptStruct_FActorSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorSet.InnerSingleton;
}
// ********** End ScriptStruct FActorSet ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorSet_h__Script_ActorContainers_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorSet::StaticStruct, Z_Construct_UScriptStruct_FActorSet_Statics::NewStructOps, TEXT("ActorSet"), &Z_Registration_Info_UScriptStruct_FActorSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSet), 2626596002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorSet_h__Script_ActorContainers_1346469355(TEXT("/Script/ActorContainers"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorSet_h__Script_ActorContainers_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorSet_h__Script_ActorContainers_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
