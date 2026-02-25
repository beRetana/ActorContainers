// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorContainersFunctionLibrary.h"
#include "ActorContainers/FActorArray.h"
#include "ActorContainers/FActorSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorContainersFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ACTORCONTAINERS_API UClass* Z_Construct_UClass_UActorContainersFunctionLibrary();
ACTORCONTAINERS_API UClass* Z_Construct_UClass_UActorContainersFunctionLibrary_NoRegister();
ACTORCONTAINERS_API UScriptStruct* Z_Construct_UScriptStruct_FActorArray();
ACTORCONTAINERS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSet();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ActorContainers();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorContainersFunctionLibrary Function Add *****************************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics
{
	struct ActorContainersFunctionLibrary_eventAdd_Parms
	{
		FActorArray InActorArray;
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds the given Actor if it passes the filter in the ActorArray.\n\x09 * @param InActorArray The ActorArray the actor is being added to.\n\x09 * @param InActor The actor added to the ActorArray.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds the given Actor if it passes the filter in the ActorArray.\n@param InActorArray The ActorArray the actor is being added to.\n@param InActor The actor added to the ActorArray." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventAdd_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventAdd_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::NewProp_InActorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "Add", Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::ActorContainersFunctionLibrary_eventAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::ActorContainersFunctionLibrary_eventAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execAdd)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::Add(Z_Param_Out_InActorArray,Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function Add *******************************

// ********** Begin Class UActorContainersFunctionLibrary Function CleanNullsFromArray *************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics
{
	struct ActorContainersFunctionLibrary_eventCleanNullsFromArray_Parms
	{
		FActorArray InActorArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes all the Null pointers in the array.\n\x09 * @param InActorArray Array to be cleaned\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all the Null pointers in the array.\n@param InActorArray Array to be cleaned" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventCleanNullsFromArray_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::NewProp_InActorArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "CleanNullsFromArray", Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::ActorContainersFunctionLibrary_eventCleanNullsFromArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::ActorContainersFunctionLibrary_eventCleanNullsFromArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execCleanNullsFromArray)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::CleanNullsFromArray(Z_Param_Out_InActorArray);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function CleanNullsFromArray ***************

// ********** Begin Class UActorContainersFunctionLibrary Function CleanNullsFromSet ***************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics
{
	struct ActorContainersFunctionLibrary_eventCleanNullsFromSet_Parms
	{
		FActorSet InActorSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove all the elements that are null in the set.\n\x09 * @param InActorSet The ActorSet to be cleaned.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all the elements that are null in the set.\n@param InActorSet The ActorSet to be cleaned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::NewProp_InActorSet = { "InActorSet", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventCleanNullsFromSet_Parms, InActorSet), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::NewProp_InActorSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "CleanNullsFromSet", Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::ActorContainersFunctionLibrary_eventCleanNullsFromSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::ActorContainersFunctionLibrary_eventCleanNullsFromSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execCleanNullsFromSet)
{
	P_GET_STRUCT_REF(FActorSet,Z_Param_Out_InActorSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::CleanNullsFromSet(Z_Param_Out_InActorSet);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function CleanNullsFromSet *****************

// ********** Begin Class UActorContainersFunctionLibrary Function ContainsArray *******************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics
{
	struct ActorContainersFunctionLibrary_eventContainsArray_Parms
	{
		FActorArray InActorArray;
		AActor* InActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks in the given ActorArray if the given actor is in it.\n\x09 * @param InActorArray The ActorArray to be checked. \n\x09 * @param InActor The actor to be looked for in the ActorArray.\n\x09 * @return True if the actor is in the ActorArray, False otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks in the given ActorArray if the given actor is in it.\n@param InActorArray The ActorArray to be checked.\n@param InActor The actor to be looked for in the ActorArray.\n@return True if the actor is in the ActorArray, False otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventContainsArray_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventContainsArray_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorContainersFunctionLibrary_eventContainsArray_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorContainersFunctionLibrary_eventContainsArray_Parms), &Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_InActorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "ContainsArray", Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::ActorContainersFunctionLibrary_eventContainsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::ActorContainersFunctionLibrary_eventContainsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execContainsArray)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorContainersFunctionLibrary::ContainsArray(Z_Param_Out_InActorArray,Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function ContainsArray *********************

// ********** Begin Class UActorContainersFunctionLibrary Function ContainsSet *********************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics
{
	struct ActorContainersFunctionLibrary_eventContainsSet_Parms
	{
		FActorSet InActorSet;
		const AActor* InActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the Actor given is in the ActorSet.\n\x09 * @param InActorSet The ActorSet checked.\n\x09 * @param InActor The Actor being checked for in the ActorSet.\n\x09 * @return True if the Actor given is in the ActorSet False otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Actor given is in the ActorSet.\n@param InActorSet The ActorSet checked.\n@param InActor The Actor being checked for in the ActorSet.\n@return True if the Actor given is in the ActorSet False otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_InActorSet = { "InActorSet", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventContainsSet_Parms, InActorSet), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventContainsSet_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActor_MetaData), NewProp_InActor_MetaData) };
void Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorContainersFunctionLibrary_eventContainsSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorContainersFunctionLibrary_eventContainsSet_Parms), &Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_InActorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "ContainsSet", Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::ActorContainersFunctionLibrary_eventContainsSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::ActorContainersFunctionLibrary_eventContainsSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execContainsSet)
{
	P_GET_STRUCT_REF(FActorSet,Z_Param_Out_InActorSet);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorContainersFunctionLibrary::ContainsSet(Z_Param_Out_InActorSet,Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function ContainsSet ***********************

// ********** Begin Class UActorContainersFunctionLibrary Function EmptyArray **********************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics
{
	struct ActorContainersFunctionLibrary_eventEmptyArray_Parms
	{
		FActorArray InActorArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Empties the ActorArray given.\n\x09 * @param InActorArray The ActorArray to be emptied.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empties the ActorArray given.\n@param InActorArray The ActorArray to be emptied." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventEmptyArray_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::NewProp_InActorArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "EmptyArray", Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::ActorContainersFunctionLibrary_eventEmptyArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::ActorContainersFunctionLibrary_eventEmptyArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execEmptyArray)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::EmptyArray(Z_Param_Out_InActorArray);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function EmptyArray ************************

// ********** Begin Class UActorContainersFunctionLibrary Function EmptySet ************************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics
{
	struct ActorContainersFunctionLibrary_eventEmptySet_Parms
	{
		FActorSet InActorSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Empties the ActorSet given.\n\x09 * @param InActorSet \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empties the ActorSet given.\n@param InActorSet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::NewProp_InActorSet = { "InActorSet", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventEmptySet_Parms, InActorSet), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::NewProp_InActorSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "EmptySet", Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::ActorContainersFunctionLibrary_eventEmptySet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::ActorContainersFunctionLibrary_eventEmptySet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execEmptySet)
{
	P_GET_STRUCT_REF(FActorSet,Z_Param_Out_InActorSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::EmptySet(Z_Param_Out_InActorSet);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function EmptySet **************************

// ********** Begin Class UActorContainersFunctionLibrary Function GetAllActorsFromArray ***********
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics
{
	struct ActorContainersFunctionLibrary_eventGetAllActorsFromArray_Parms
	{
		FActorArray InActorArray;
		TArray<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transfers the Actors in InActorArray to OutActors\n\x09 * @param InActorArray The array with the Actors to transfer\n\x09 * @param OutActors The array to transfers the Actors to\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transfers the Actors in InActorArray to OutActors\n@param InActorArray The array with the Actors to transfer\n@param OutActors The array to transfers the Actors to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventGetAllActorsFromArray_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventGetAllActorsFromArray_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::NewProp_InActorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "GetAllActorsFromArray", Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::ActorContainersFunctionLibrary_eventGetAllActorsFromArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::ActorContainersFunctionLibrary_eventGetAllActorsFromArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execGetAllActorsFromArray)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::GetAllActorsFromArray(Z_Param_Out_InActorArray,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function GetAllActorsFromArray *************

// ********** Begin Class UActorContainersFunctionLibrary Function GetAllActorsFromSet *************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics
{
	struct ActorContainersFunctionLibrary_eventGetAllActorsFromSet_Parms
	{
		FActorSet InActorSet;
		TSet<AActor*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transfers all the actors from the ActorSet into another set.\n\x09 * @param InActorSet ActorSet with the information to transfer\n\x09 * @param OutActors Set to be filled with the information\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transfers all the actors from the ActorSet into another set.\n@param InActorSet ActorSet with the information to transfer\n@param OutActors Set to be filled with the information" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::NewProp_InActorSet = { "InActorSet", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventGetAllActorsFromSet_Parms, InActorSet), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::NewProp_OutActors_ElementProp = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventGetAllActorsFromSet_Parms, OutActors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::NewProp_InActorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::NewProp_OutActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "GetAllActorsFromSet", Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::ActorContainersFunctionLibrary_eventGetAllActorsFromSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::ActorContainersFunctionLibrary_eventGetAllActorsFromSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execGetAllActorsFromSet)
{
	P_GET_STRUCT_REF(FActorSet,Z_Param_Out_InActorSet);
	P_GET_TSET_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::GetAllActorsFromSet(Z_Param_Out_InActorSet,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function GetAllActorsFromSet ***************

// ********** Begin Class UActorContainersFunctionLibrary Function IsValidType *********************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics
{
	struct ActorContainersFunctionLibrary_eventIsValidType_Parms
	{
		const AActor* InActor;
		const TSubclassOf<AActor> InClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks the actor is a type of the filter given.\n\x09 * @param InActor Actor to check.\n\x09 * @param InClass Filter used to check if the actor is valid.\n\x09 * @return True if the Actor is a type of the filter given.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks the actor is a type of the filter given.\n@param InActor Actor to check.\n@param InClass Filter used to check if the actor is valid.\n@return True if the Actor is a type of the filter given." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventIsValidType_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActor_MetaData), NewProp_InActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventIsValidType_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClass_MetaData), NewProp_InClass_MetaData) };
void Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorContainersFunctionLibrary_eventIsValidType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorContainersFunctionLibrary_eventIsValidType_Parms), &Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "IsValidType", Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::ActorContainersFunctionLibrary_eventIsValidType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::ActorContainersFunctionLibrary_eventIsValidType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execIsValidType)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<AActor>,Z_Param_Out_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorContainersFunctionLibrary::IsValidType(Z_Param_InActor,Z_Param_Out_InClass);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function IsValidType ***********************

// ********** Begin Class UActorContainersFunctionLibrary Function MakeActorArray ******************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics
{
	struct ActorContainersFunctionLibrary_eventMakeActorArray_Parms
	{
		const TSubclassOf<AActor> ClassFilter;
		FActorArray ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates an empty ActorArray and returns it.\n\x09 * @param ClassFilter The filter the ActorArray should have.\n\x09 * @return An empty ActorArray\n\x09 */" },
#endif
		{ "CPP_Default_ClassFilter", "None" },
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an empty ActorArray and returns it.\n@param ClassFilter The filter the ActorArray should have.\n@return An empty ActorArray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventMakeActorArray_Parms, ClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassFilter_MetaData), NewProp_ClassFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventMakeActorArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::NewProp_ClassFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "MakeActorArray", Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::ActorContainersFunctionLibrary_eventMakeActorArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::ActorContainersFunctionLibrary_eventMakeActorArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execMakeActorArray)
{
	P_GET_OBJECT(UClass,Z_Param_ClassFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActorArray*)Z_Param__Result=UActorContainersFunctionLibrary::MakeActorArray(Z_Param_ClassFilter);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function MakeActorArray ********************

// ********** Begin Class UActorContainersFunctionLibrary Function MakeActorSet ********************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics
{
	struct ActorContainersFunctionLibrary_eventMakeActorSet_Parms
	{
		const TSubclassOf<AActor> ClassFilter;
		FActorSet ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a new empty ActorSet and returns it.\n\x09 * @param ClassFilter The default filter the ActorSet should have.\n\x09 * @return A new empty ActorSet.\n\x09 */" },
#endif
		{ "CPP_Default_ClassFilter", "None" },
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new empty ActorSet and returns it.\n@param ClassFilter The default filter the ActorSet should have.\n@return A new empty ActorSet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventMakeActorSet_Parms, ClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassFilter_MetaData), NewProp_ClassFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventMakeActorSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::NewProp_ClassFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "MakeActorSet", Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::ActorContainersFunctionLibrary_eventMakeActorSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::ActorContainersFunctionLibrary_eventMakeActorSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execMakeActorSet)
{
	P_GET_OBJECT(UClass,Z_Param_ClassFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActorSet*)Z_Param__Result=UActorContainersFunctionLibrary::MakeActorSet(Z_Param_ClassFilter);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function MakeActorSet **********************

// ********** Begin Class UActorContainersFunctionLibrary Function PopElement **********************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics
{
	struct ActorContainersFunctionLibrary_eventPopElement_Parms
	{
		FActorSet InActorSet;
		AActor* InActor;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Eliminates the actor given returning the index it was found at.\n\x09 * @param InActorSet The ActorSet the actor is being removed from.\n\x09 * @param InActor The Actor being removed from the set.\n\x09 * @return The index at which the element was found.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Eliminates the actor given returning the index it was found at.\n@param InActorSet The ActorSet the actor is being removed from.\n@param InActor The Actor being removed from the set.\n@return The index at which the element was found." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::NewProp_InActorSet = { "InActorSet", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventPopElement_Parms, InActorSet), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventPopElement_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventPopElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::NewProp_InActorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "PopElement", Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::ActorContainersFunctionLibrary_eventPopElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::ActorContainersFunctionLibrary_eventPopElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execPopElement)
{
	P_GET_STRUCT_REF(FActorSet,Z_Param_Out_InActorSet);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UActorContainersFunctionLibrary::PopElement(Z_Param_Out_InActorSet,Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function PopElement ************************

// ********** Begin Class UActorContainersFunctionLibrary Function Push ****************************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics
{
	struct ActorContainersFunctionLibrary_eventPush_Parms
	{
		FActorSet InActorSet;
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds the actor into the set by reference if it passes the filter.\n\x09 * @param InActorSet Set passed by reference that might have the actor added to it.\n\x09 * @param InActor Actor that might be added to the set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds the actor into the set by reference if it passes the filter.\n@param InActorSet Set passed by reference that might have the actor added to it.\n@param InActor Actor that might be added to the set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::NewProp_InActorSet = { "InActorSet", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventPush_Parms, InActorSet), Z_Construct_UScriptStruct_FActorSet, METADATA_PARAMS(0, nullptr) }; // 2626596002
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventPush_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::NewProp_InActorSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "Push", Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::ActorContainersFunctionLibrary_eventPush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::ActorContainersFunctionLibrary_eventPush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_Push()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_Push_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execPush)
{
	P_GET_STRUCT_REF(FActorSet,Z_Param_Out_InActorSet);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::Push(Z_Param_Out_InActorSet,Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function Push ******************************

// ********** Begin Class UActorContainersFunctionLibrary Function Remove **************************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics
{
	struct ActorContainersFunctionLibrary_eventRemove_Parms
	{
		FActorArray InActorArray;
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes the given actor from the ActorArray if it exists in it.\n\x09 * @param InActorArray The ActorArray the actor is being removed from.\n\x09 * @param InActor The actor to be removed from the ActorArray.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the given actor from the ActorArray if it exists in it.\n@param InActorArray The ActorArray the actor is being removed from.\n@param InActor The actor to be removed from the ActorArray." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventRemove_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventRemove_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::NewProp_InActorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "Remove", Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::ActorContainersFunctionLibrary_eventRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::ActorContainersFunctionLibrary_eventRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execRemove)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::Remove(Z_Param_Out_InActorArray,Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function Remove ****************************

// ********** Begin Class UActorContainersFunctionLibrary Function RemoveAt ************************
struct Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics
{
	struct ActorContainersFunctionLibrary_eventRemoveAt_Parms
	{
		FActorArray InActorArray;
		int32 InIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ActorContainers|ActorArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removed the actor at the given index from the given ActorArray.\n\x09 * @param InActorArray The ActorArray the actor is being removed from.\n\x09 * @param InIndex The index to look at when removing the actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removed the actor at the given index from the given ActorArray.\n@param InActorArray The ActorArray the actor is being removed from.\n@param InIndex The index to look at when removing the actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InActorArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::NewProp_InActorArray = { "InActorArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventRemoveAt_Parms, InActorArray), Z_Construct_UScriptStruct_FActorArray, METADATA_PARAMS(0, nullptr) }; // 2360194017
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorContainersFunctionLibrary_eventRemoveAt_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::NewProp_InActorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::NewProp_InIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorContainersFunctionLibrary, nullptr, "RemoveAt", Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::ActorContainersFunctionLibrary_eventRemoveAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::ActorContainersFunctionLibrary_eventRemoveAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorContainersFunctionLibrary::execRemoveAt)
{
	P_GET_STRUCT_REF(FActorArray,Z_Param_Out_InActorArray);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorContainersFunctionLibrary::RemoveAt(Z_Param_Out_InActorArray,Z_Param_InIndex);
	P_NATIVE_END;
}
// ********** End Class UActorContainersFunctionLibrary Function RemoveAt **************************

// ********** Begin Class UActorContainersFunctionLibrary ******************************************
void UActorContainersFunctionLibrary::StaticRegisterNativesUActorContainersFunctionLibrary()
{
	UClass* Class = UActorContainersFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Add", &UActorContainersFunctionLibrary::execAdd },
		{ "CleanNullsFromArray", &UActorContainersFunctionLibrary::execCleanNullsFromArray },
		{ "CleanNullsFromSet", &UActorContainersFunctionLibrary::execCleanNullsFromSet },
		{ "ContainsArray", &UActorContainersFunctionLibrary::execContainsArray },
		{ "ContainsSet", &UActorContainersFunctionLibrary::execContainsSet },
		{ "EmptyArray", &UActorContainersFunctionLibrary::execEmptyArray },
		{ "EmptySet", &UActorContainersFunctionLibrary::execEmptySet },
		{ "GetAllActorsFromArray", &UActorContainersFunctionLibrary::execGetAllActorsFromArray },
		{ "GetAllActorsFromSet", &UActorContainersFunctionLibrary::execGetAllActorsFromSet },
		{ "IsValidType", &UActorContainersFunctionLibrary::execIsValidType },
		{ "MakeActorArray", &UActorContainersFunctionLibrary::execMakeActorArray },
		{ "MakeActorSet", &UActorContainersFunctionLibrary::execMakeActorSet },
		{ "PopElement", &UActorContainersFunctionLibrary::execPopElement },
		{ "Push", &UActorContainersFunctionLibrary::execPush },
		{ "Remove", &UActorContainersFunctionLibrary::execRemove },
		{ "RemoveAt", &UActorContainersFunctionLibrary::execRemoveAt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorContainersFunctionLibrary;
UClass* UActorContainersFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UActorContainersFunctionLibrary;
	if (!Z_Registration_Info_UClass_UActorContainersFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorContainersFunctionLibrary"),
			Z_Registration_Info_UClass_UActorContainersFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUActorContainersFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UActorContainersFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorContainersFunctionLibrary_NoRegister()
{
	return UActorContainersFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorContainersFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorContainersFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ActorContainersFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_Add, "Add" }, // 2667712921
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromArray, "CleanNullsFromArray" }, // 1817684085
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_CleanNullsFromSet, "CleanNullsFromSet" }, // 3196684121
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsArray, "ContainsArray" }, // 2056910674
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_ContainsSet, "ContainsSet" }, // 1552971129
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptyArray, "EmptyArray" }, // 316751327
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_EmptySet, "EmptySet" }, // 3320061389
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromArray, "GetAllActorsFromArray" }, // 187170215
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_GetAllActorsFromSet, "GetAllActorsFromSet" }, // 771039858
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_IsValidType, "IsValidType" }, // 4095919662
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorArray, "MakeActorArray" }, // 1412718183
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_MakeActorSet, "MakeActorSet" }, // 3629594484
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_PopElement, "PopElement" }, // 3173974669
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_Push, "Push" }, // 1860784348
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_Remove, "Remove" }, // 258313401
		{ &Z_Construct_UFunction_UActorContainersFunctionLibrary_RemoveAt, "RemoveAt" }, // 2231712809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorContainersFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorContainersFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorContainers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorContainersFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorContainersFunctionLibrary_Statics::ClassParams = {
	&UActorContainersFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorContainersFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorContainersFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorContainersFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UActorContainersFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorContainersFunctionLibrary.OuterSingleton, Z_Construct_UClass_UActorContainersFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorContainersFunctionLibrary.OuterSingleton;
}
UActorContainersFunctionLibrary::UActorContainersFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorContainersFunctionLibrary);
UActorContainersFunctionLibrary::~UActorContainersFunctionLibrary() {}
// ********** End Class UActorContainersFunctionLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainersFunctionLibrary_h__Script_ActorContainers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorContainersFunctionLibrary, UActorContainersFunctionLibrary::StaticClass, TEXT("UActorContainersFunctionLibrary"), &Z_Registration_Info_UClass_UActorContainersFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorContainersFunctionLibrary), 2527102360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainersFunctionLibrary_h__Script_ActorContainers_3571068873(TEXT("/Script/ActorContainers"),
	Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainersFunctionLibrary_h__Script_ActorContainers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_breta_Downloads_Proyectos_Personales_Unreal_GroupProjects_Breaker_Breaker_Plugins_ActorContainers_Source_ActorContainers_Public_ActorContainersFunctionLibrary_h__Script_ActorContainers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
