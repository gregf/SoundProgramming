// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelFront();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelFront_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameWheelFront **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront;
UClass* UIMPGA_RacingGameWheelFront::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameWheelFront;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameWheelFront"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameWheelFront,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelFront_NoRegister()
{
	return UIMPGA_RacingGameWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "IMPGA_RacingGameWheelFront.h" },
		{ "ModuleRelativePath", "IMPGA_RacingGameWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameWheelFront constinit property declarations **************
// ********** End Class UIMPGA_RacingGameWheelFront constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics::ClassParams = {
	&UIMPGA_RacingGameWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameWheelFront::StaticRegisterNativesUIMPGA_RacingGameWheelFront()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelFront()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameWheelFront);
UIMPGA_RacingGameWheelFront::~UIMPGA_RacingGameWheelFront() {}
// ********** End Class UIMPGA_RacingGameWheelFront ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelFront_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameWheelFront, UIMPGA_RacingGameWheelFront::StaticClass, TEXT("UIMPGA_RacingGameWheelFront"), &Z_Registration_Info_UClass_UIMPGA_RacingGameWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameWheelFront), 1973961688U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelFront_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelFront_h__Script_IMPGA_RacingGame_864530615{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelFront_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelFront_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
