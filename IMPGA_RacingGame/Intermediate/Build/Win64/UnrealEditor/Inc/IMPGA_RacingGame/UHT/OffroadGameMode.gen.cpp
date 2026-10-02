// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Variant_OffRoad/OffroadGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOffroadGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AOffroadGameMode();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AOffroadGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOffroadGameMode *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AOffroadGameMode;
UClass* AOffroadGameMode::GetPrivateStaticClass()
{
	using TClass = AOffroadGameMode;
	if (!Z_Registration_Info_UClass_AOffroadGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OffroadGameMode"),
			Z_Registration_Info_UClass_AOffroadGameMode.InnerSingleton,
			StaticRegisterNativesAOffroadGameMode,
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
	return Z_Registration_Info_UClass_AOffroadGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AOffroadGameMode_NoRegister()
{
	return AOffroadGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOffroadGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for an offroad vehicle game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_OffRoad/OffroadGameMode.h" },
		{ "ModuleRelativePath", "Variant_OffRoad/OffroadGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for an offroad vehicle game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AOffroadGameMode constinit property declarations *************************
// ********** End Class AOffroadGameMode constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOffroadGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AOffroadGameMode_Statics
UObject* (*const Z_Construct_UClass_AOffroadGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOffroadGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOffroadGameMode_Statics::ClassParams = {
	&AOffroadGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOffroadGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOffroadGameMode_Statics::Class_MetaDataParams)
};
void AOffroadGameMode::StaticRegisterNativesAOffroadGameMode()
{
}
UClass* Z_Construct_UClass_AOffroadGameMode()
{
	if (!Z_Registration_Info_UClass_AOffroadGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOffroadGameMode.OuterSingleton, Z_Construct_UClass_AOffroadGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOffroadGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOffroadGameMode);
AOffroadGameMode::~AOffroadGameMode() {}
// ********** End Class AOffroadGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_OffRoad_OffroadGameMode_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOffroadGameMode, AOffroadGameMode::StaticClass, TEXT("AOffroadGameMode"), &Z_Registration_Info_UClass_AOffroadGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOffroadGameMode), 1593738564U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_OffRoad_OffroadGameMode_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_OffRoad_OffroadGameMode_h__Script_IMPGA_RacingGame_2402019898{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_OffRoad_OffroadGameMode_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_OffRoad_OffroadGameMode_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
