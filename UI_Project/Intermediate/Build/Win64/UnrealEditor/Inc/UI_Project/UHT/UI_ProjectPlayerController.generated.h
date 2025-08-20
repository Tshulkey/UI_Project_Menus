// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI_ProjectPlayerController.h"

#ifdef UI_PROJECT_UI_ProjectPlayerController_generated_h
#error "UI_ProjectPlayerController.generated.h already included, missing '#pragma once' in UI_ProjectPlayerController.h"
#endif
#define UI_PROJECT_UI_ProjectPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUI_ProjectPlayerController **********************************************
UI_PROJECT_API UClass* Z_Construct_UClass_AUI_ProjectPlayerController_NoRegister();

#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_ProjectPlayerController(); \
	friend struct Z_Construct_UClass_AUI_ProjectPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UI_PROJECT_API UClass* Z_Construct_UClass_AUI_ProjectPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AUI_ProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UI_Project"), Z_Construct_UClass_AUI_ProjectPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AUI_ProjectPlayerController)


#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI_ProjectPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUI_ProjectPlayerController(AUI_ProjectPlayerController&&) = delete; \
	AUI_ProjectPlayerController(const AUI_ProjectPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_ProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_ProjectPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI_ProjectPlayerController) \
	NO_API virtual ~AUI_ProjectPlayerController();


#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h_16_PROLOG
#define FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUI_ProjectPlayerController;

// ********** End Class AUI_ProjectPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
