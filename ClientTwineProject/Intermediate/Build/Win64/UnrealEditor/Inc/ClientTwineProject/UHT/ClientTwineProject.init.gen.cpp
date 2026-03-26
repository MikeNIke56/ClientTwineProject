// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientTwineProject_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	CLIENTTWINEPROJECT_API UFunction* Z_Construct_UDelegateFunction_ClientTwineProject_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ClientTwineProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ClientTwineProject()
	{
		if (!Z_Registration_Info_UPackage__Script_ClientTwineProject.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ClientTwineProject_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ClientTwineProject",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xE2F91A66,
			0x6614AC58,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ClientTwineProject.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ClientTwineProject.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ClientTwineProject(Z_Construct_UPackage__Script_ClientTwineProject, TEXT("/Script/ClientTwineProject"), Z_Registration_Info_UPackage__Script_ClientTwineProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2F91A66, 0x6614AC58));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
