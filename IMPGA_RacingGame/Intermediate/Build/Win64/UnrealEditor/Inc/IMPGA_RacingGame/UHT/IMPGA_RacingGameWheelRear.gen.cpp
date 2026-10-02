// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelRear();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelRear_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameWheelRear ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear;
UClass* UIMPGA_RacingGameWheelRear::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameWheelRear;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameWheelRear"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameWheelRear,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelRear_NoRegister()
{
	return UIMPGA_RacingGameWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "IMPGA_RacingGameWheelRear.h" },
		{ "ModuleRelativePath", "IMPGA_RacingGameWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameWheelRear constinit property declarations ***************
// ********** End Class UIMPGA_RacingGameWheelRear constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics::ClassParams = {
	&UIMPGA_RacingGameWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameWheelRear::StaticRegisterNativesUIMPGA_RacingGameWheelRear()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelRear()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameWheelRear);
UIMPGA_RacingGameWheelRear::~UIMPGA_RacingGameWheelRear() {}
// ********** End Class UIMPGA_RacingGameWheelRear *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelRear_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameWheelRear, UIMPGA_RacingGameWheelRear::StaticClass, TEXT("UIMPGA_RacingGameWheelRear"), &Z_Registration_Info_UClass_UIMPGA_RacingGameWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameWheelRear), 2250883720U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelRear_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelRear_h__Script_IMPGA_RacingGame_1402353490{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelRear_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameWheelRear_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
