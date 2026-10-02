// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameSportsWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameSportsWheelRear() {}

// ********** Begin Cross Module References ********************************************************
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelRear();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameSportsWheelRear *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear;
UClass* UIMPGA_RacingGameSportsWheelRear::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameSportsWheelRear;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameSportsWheelRear"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameSportsWheelRear,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_NoRegister()
{
	return UIMPGA_RacingGameSportsWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "SportsCar/IMPGA_RacingGameSportsWheelRear.h" },
		{ "ModuleRelativePath", "SportsCar/IMPGA_RacingGameSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameSportsWheelRear constinit property declarations *********
// ********** End Class UIMPGA_RacingGameSportsWheelRear constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameSportsWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIMPGA_RacingGameWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics::ClassParams = {
	&UIMPGA_RacingGameSportsWheelRear::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameSportsWheelRear::StaticRegisterNativesUIMPGA_RacingGameSportsWheelRear()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameSportsWheelRear);
UIMPGA_RacingGameSportsWheelRear::~UIMPGA_RacingGameSportsWheelRear() {}
// ********** End Class UIMPGA_RacingGameSportsWheelRear *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelRear_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameSportsWheelRear, UIMPGA_RacingGameSportsWheelRear::StaticClass, TEXT("UIMPGA_RacingGameSportsWheelRear"), &Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameSportsWheelRear), 2741299718U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelRear_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelRear_h__Script_IMPGA_RacingGame_2908041642{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelRear_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelRear_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
