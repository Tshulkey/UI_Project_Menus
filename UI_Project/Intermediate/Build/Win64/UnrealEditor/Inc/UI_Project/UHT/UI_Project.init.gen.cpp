// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Project_init() {}
	UI_PROJECT_API UFunction* Z_Construct_UDelegateFunction_UI_Project_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UI_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UI_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_UI_Project.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UI_Project_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UI_Project",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAA1D0E22,
				0xA45AE5BF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UI_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UI_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UI_Project(Z_Construct_UPackage__Script_UI_Project, TEXT("/Script/UI_Project"), Z_Registration_Info_UPackage__Script_UI_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAA1D0E22, 0xA45AE5BF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
