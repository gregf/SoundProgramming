// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGameGameMode();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIMPGA_RacingGameGameMode ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode;
UClass* AIMPGA_RacingGameGameMode::GetPrivateStaticClass()
{
	using TClass = AIMPGA_RacingGameGameMode;
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameGameMode"),
			Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode.InnerSingleton,
			StaticRegisterNativesAIMPGA_RacingGameGameMode,
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
	return Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AIMPGA_RacingGameGameMode_NoRegister()
{
	return AIMPGA_RacingGameGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IMPGA_RacingGameGameMode.h" },
		{ "ModuleRelativePath", "IMPGA_RacingGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIMPGA_RacingGameGameMode constinit property declarations ****************
// ********** End Class AIMPGA_RacingGameGameMode constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIMPGA_RacingGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics
UObject* (*const Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics::ClassParams = {
	&AIMPGA_RacingGameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics::Class_MetaDataParams)
};
void AIMPGA_RacingGameGameMode::StaticRegisterNativesAIMPGA_RacingGameGameMode()
{
}
UClass* Z_Construct_UClass_AIMPGA_RacingGameGameMode()
{
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode.OuterSingleton, Z_Construct_UClass_AIMPGA_RacingGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIMPGA_RacingGameGameMode);
AIMPGA_RacingGameGameMode::~AIMPGA_RacingGameGameMode() {}
// ********** End Class AIMPGA_RacingGameGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameGameMode_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIMPGA_RacingGameGameMode, AIMPGA_RacingGameGameMode::StaticClass, TEXT("AIMPGA_RacingGameGameMode"), &Z_Registration_Info_UClass_AIMPGA_RacingGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIMPGA_RacingGameGameMode), 1820806189U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameGameMode_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameGameMode_h__Script_IMPGA_RacingGame_251962801{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameGameMode_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameGameMode_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
