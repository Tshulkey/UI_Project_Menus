// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI_ProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUI_ProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UI_PROJECT_API UClass* Z_Construct_UClass_AUI_ProjectGameMode();
UI_PROJECT_API UClass* Z_Construct_UClass_AUI_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UI_Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUI_ProjectGameMode ******************************************************
void AUI_ProjectGameMode::StaticRegisterNativesAUI_ProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUI_ProjectGameMode;
UClass* AUI_ProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AUI_ProjectGameMode;
	if (!Z_Registration_Info_UClass_AUI_ProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UI_ProjectGameMode"),
			Z_Registration_Info_UClass_AUI_ProjectGameMode.InnerSingleton,
			StaticRegisterNativesAUI_ProjectGameMode,
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
	return Z_Registration_Info_UClass_AUI_ProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUI_ProjectGameMode_NoRegister()
{
	return AUI_ProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUI_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UI_ProjectGameMode.h" },
		{ "ModuleRelativePath", "UI_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUI_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUI_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UI_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUI_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUI_ProjectGameMode_Statics::ClassParams = {
	&AUI_ProjectGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUI_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUI_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUI_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AUI_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUI_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AUI_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUI_ProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUI_ProjectGameMode);
AUI_ProjectGameMode::~AUI_ProjectGameMode() {}
// ********** End Class AUI_ProjectGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectGameMode_h__Script_UI_Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUI_ProjectGameMode, AUI_ProjectGameMode::StaticClass, TEXT("AUI_ProjectGameMode"), &Z_Registration_Info_UClass_AUI_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUI_ProjectGameMode), 249244725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectGameMode_h__Script_UI_Project_2699637894(TEXT("/Script/UI_Project"),
	Z_CompiledInDeferFile_FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectGameMode_h__Script_UI_Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tshul_OneDrive_Desktop_Game_Project_UI_Project_Source_UI_Project_UI_ProjectGameMode_h__Script_UI_Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
