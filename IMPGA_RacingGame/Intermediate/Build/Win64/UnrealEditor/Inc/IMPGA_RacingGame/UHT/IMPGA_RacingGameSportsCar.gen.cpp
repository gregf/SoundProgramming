// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameSportsCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameSportsCar() {}

// ********** Begin Cross Module References ********************************************************
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGameSportsCar();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGameSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIMPGA_RacingGameSportsCar ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar;
UClass* AIMPGA_RacingGameSportsCar::GetPrivateStaticClass()
{
	using TClass = AIMPGA_RacingGameSportsCar;
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameSportsCar"),
			Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar.InnerSingleton,
			StaticRegisterNativesAIMPGA_RacingGameSportsCar,
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
	return Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar.InnerSingleton;
}
UClass* Z_Construct_UClass_AIMPGA_RacingGameSportsCar_NoRegister()
{
	return AIMPGA_RacingGameSportsCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SportsCar/IMPGA_RacingGameSportsCar.h" },
		{ "ModuleRelativePath", "SportsCar/IMPGA_RacingGameSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIMPGA_RacingGameSportsCar constinit property declarations ***************
// ********** End Class AIMPGA_RacingGameSportsCar constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIMPGA_RacingGameSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics
UObject* (*const Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIMPGA_RacingGamePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics::ClassParams = {
	&AIMPGA_RacingGameSportsCar::StaticClass,
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
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics::Class_MetaDataParams)
};
void AIMPGA_RacingGameSportsCar::StaticRegisterNativesAIMPGA_RacingGameSportsCar()
{
}
UClass* Z_Construct_UClass_AIMPGA_RacingGameSportsCar()
{
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar.OuterSingleton, Z_Construct_UClass_AIMPGA_RacingGameSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIMPGA_RacingGameSportsCar);
AIMPGA_RacingGameSportsCar::~AIMPGA_RacingGameSportsCar() {}
// ********** End Class AIMPGA_RacingGameSportsCar *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsCar_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIMPGA_RacingGameSportsCar, AIMPGA_RacingGameSportsCar::StaticClass, TEXT("AIMPGA_RacingGameSportsCar"), &Z_Registration_Info_UClass_AIMPGA_RacingGameSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIMPGA_RacingGameSportsCar), 2812400883U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsCar_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsCar_h__Script_IMPGA_RacingGame_1521154193{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsCar_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsCar_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
