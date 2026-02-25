// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorContainers/FActorArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFActorArray() {}

// ********** Begin Cross Module References ********************************************************
ACTORCONTAINERS_API UScriptStruct* Z_Construct_UScriptStruct_FActorArray();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActorContainers();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorArray *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorArray;
class UScriptStruct* FActorArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorArray, (UObject*)Z_Construct_UPackage__Script_ActorContainers(), TEXT("ActorArray"));
	}
	return Z_Registration_Info_UScriptStruct_FActorArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorContainers/FActorArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Public/ActorContainers/FActorArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsArray_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Public/ActorContainers/FActorArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorArray_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorArray, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorArray_Statics::NewProp_ActorsArray_Inner = { "ActorsArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorArray_Statics::NewProp_ActorsArray = { "ActorsArray", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorArray, ActorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsArray_MetaData), NewProp_ActorsArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorArray_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorArray_Statics::NewProp_ActorsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorArray_Statics::NewProp_ActorsArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorContainers,
	nullptr,
	&NewStructOps,
	"ActorArray",
	Z_Construct_UScriptStruct_FActorArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorArray_Statics::PropPointers),
	sizeof(FActorArray),
	alignof(FActorArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorArray()
{
	if (!Z_Registration_Info_UScriptStruct_FActorArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorArray.InnerSingleton, Z_Construct_UScriptStruct_FActorArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorArray.InnerSingleton;
}
// ********** End ScriptStruct FActorArray *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorArray_h__Script_ActorContainers_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorArray::StaticStruct, Z_Construct_UScriptStruct_FActorArray_Statics::NewStructOps, TEXT("ActorArray"), &Z_Registration_Info_UScriptStruct_FActorArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorArray), 2360194017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorArray_h__Script_ActorContainers_1612010549(TEXT("/Script/ActorContainers"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorArray_h__Script_ActorContainers_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainers_FActorArray_h__Script_ActorContainers_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
