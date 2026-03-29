// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientTwineProjectCharacter.h"

#ifdef CLIENTTWINEPROJECT_ClientTwineProjectCharacter_generated_h
#error "ClientTwineProjectCharacter.generated.h already included, missing '#pragma once' in ClientTwineProjectCharacter.h"
#endif
#define CLIENTTWINEPROJECT_ClientTwineProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AClientTwineProjectCharacter *********************************************
#define FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_AClientTwineProjectCharacter_Statics;
CLIENTTWINEPROJECT_API UClass* Z_Construct_UClass_AClientTwineProjectCharacter_NoRegister();

#define FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientTwineProjectCharacter(); \
	friend struct ::Z_Construct_UClass_AClientTwineProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIENTTWINEPROJECT_API UClass* ::Z_Construct_UClass_AClientTwineProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AClientTwineProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClientTwineProject"), Z_Construct_UClass_AClientTwineProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AClientTwineProjectCharacter)


#define FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AClientTwineProjectCharacter(AClientTwineProjectCharacter&&) = delete; \
	AClientTwineProjectCharacter(const AClientTwineProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientTwineProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientTwineProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AClientTwineProjectCharacter) \
	NO_API virtual ~AClientTwineProjectCharacter();


#define FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_21_PROLOG
#define FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AClientTwineProjectCharacter;

// ********** End Class AClientTwineProjectCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_17038_Desktop_Chalet_Chalet_ClientTwineProject_Source_ClientTwineProject_ClientTwineProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
