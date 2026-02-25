// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorContainers_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActorContainers;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActorContainers()
	{
		if (!Z_Registration_Info_UPackage__Script_ActorContainers.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActorContainers",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1A8384BC,
				0x6EF44099,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActorContainers.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ActorContainers.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActorContainers(Z_Construct_UPackage__Script_ActorContainers, TEXT("/Script/ActorContainers"), Z_Registration_Info_UPackage__Script_ActorContainers, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1A8384BC, 0x6EF44099));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
