// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientTwineProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeClientTwineProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
CLIENTTWINEPROJECT_API UClass* Z_Construct_UClass_AClientTwineProjectGameMode();
CLIENTTWINEPROJECT_API UClass* Z_Construct_UClass_AClientTwineProjectGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ClientTwineProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AClientTwineProjectGameMode **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AClientTwineProjectGameMode;
UClass* AClientTwineProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AClientTwineProjectGameMode;
	if (!Z_Registration_Info_UClass_AClientTwineProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ClientTwineProjectGameMode"),
			Z_Registration_Info_UClass_AClientTwineProjectGameMode.InnerSingleton,
			StaticRegisterNativesAClientTwineProjectGameMode,
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
	return Z_Registration_Info_UClass_AClientTwineProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AClientTwineProjectGameMode_NoRegister()
{
	return AClientTwineProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AClientTwineProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ClientTwineProjectGameMode.h" },
		{ "ModuleRelativePath", "ClientTwineProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AClientTwineProjectGameMode constinit property declarations **************
// ********** End Class AClientTwineProjectGameMode constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientTwineProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AClientTwineProjectGameMode_Statics
UObject* (*const Z_Construct_UClass_AClientTwineProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClientTwineProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClientTwineProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClientTwineProjectGameMode_Statics::ClassParams = {
	&AClientTwineProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClientTwineProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AClientTwineProjectGameMode_Statics::Class_MetaDataParams)
};
void AClientTwineProjectGameMode::StaticRegisterNativesAClientTwineProjectGameMode()
{
}
UClass* Z_Construct_UClass_AClientTwineProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AClientTwineProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClientTwineProjectGameMode.OuterSingleton, Z_Construct_UClass_AClientTwineProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClientTwineProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AClientTwineProjectGameMode);
AClientTwineProjectGameMode::~AClientTwineProjectGameMode() {}
// ********** End Class AClientTwineProjectGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectGameMode_h__Script_ClientTwineProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClientTwineProjectGameMode, AClientTwineProjectGameMode::StaticClass, TEXT("AClientTwineProjectGameMode"), &Z_Registration_Info_UClass_AClientTwineProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClientTwineProjectGameMode), 3735422604U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectGameMode_h__Script_ClientTwineProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectGameMode_h__Script_ClientTwineProject_1279167793{
	TEXT("/Script/ClientTwineProject"),
	Z_CompiledInDeferFile_FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectGameMode_h__Script_ClientTwineProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectGameMode_h__Script_ClientTwineProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
