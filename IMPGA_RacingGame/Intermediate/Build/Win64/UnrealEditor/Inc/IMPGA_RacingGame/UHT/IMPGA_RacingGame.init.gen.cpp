// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGame_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	IMPGA_RACINGGAME_API UFunction* Z_Construct_UDelegateFunction_IMPGA_RacingGame_CountdownFinishedDelegate__DelegateSignature();
	IMPGA_RACINGGAME_API UFunction* Z_Construct_UDelegateFunction_IMPGA_RacingGame_StartRaceDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IMPGA_RacingGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame()
	{
		if (!Z_Registration_Info_UPackage__Script_IMPGA_RacingGame.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_IMPGA_RacingGame_CountdownFinishedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_IMPGA_RacingGame_StartRaceDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/IMPGA_RacingGame",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x5F19DFEB,
			0xDD60CFA5,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IMPGA_RacingGame.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_IMPGA_RacingGame.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IMPGA_RacingGame(Z_Construct_UPackage__Script_IMPGA_RacingGame, TEXT("/Script/IMPGA_RacingGame"), Z_Registration_Info_UPackage__Script_IMPGA_RacingGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F19DFEB, 0xDD60CFA5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
