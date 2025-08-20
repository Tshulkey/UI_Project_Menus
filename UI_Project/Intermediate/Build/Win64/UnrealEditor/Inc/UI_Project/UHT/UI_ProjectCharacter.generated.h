// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI_ProjectCharacter.h"

#ifdef UI_PROJECT_UI_ProjectCharacter_generated_h
#error "UI_ProjectCharacter.generated.h already included, missing '#pragma once' in UI_ProjectCharacter.h"
#endif
#define UI_PROJECT_UI_ProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUI_ProjectCharacter *****************************************************
#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


UI_PROJECT_API UClass* Z_Construct_UClass_AUI_ProjectCharacter_NoRegister();

#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_ProjectCharacter(); \
	friend struct Z_Construct_UClass_AUI_ProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UI_PROJECT_API UClass* Z_Construct_UClass_AUI_ProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AUI_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UI_Project"), Z_Construct_UClass_AUI_ProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AUI_ProjectCharacter)


#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUI_ProjectCharacter(AUI_ProjectCharacter&&) = delete; \
	AUI_ProjectCharacter(const AUI_ProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_ProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AUI_ProjectCharacter) \
	NO_API virtual ~AUI_ProjectCharacter();


#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_21_PROLOG
#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUI_ProjectCharacter;

// ********** End Class AUI_ProjectCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
