// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameOffroadWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameOffroadWheelRear() {}

// ********** Begin Cross Module References ********************************************************
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelRear();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameOffroadWheelRear ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear;
UClass* UIMPGA_RacingGameOffroadWheelRear::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameOffroadWheelRear;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameOffroadWheelRear"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameOffroadWheelRear,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_NoRegister()
{
	return UIMPGA_RacingGameOffroadWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "OffroadCar/IMPGA_RacingGameOffroadWheelRear.h" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameOffroadWheelRear constinit property declarations ********
// ********** End Class UIMPGA_RacingGameOffroadWheelRear constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameOffroadWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIMPGA_RacingGameWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics::ClassParams = {
	&UIMPGA_RacingGameOffroadWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameOffroadWheelRear::StaticRegisterNativesUIMPGA_RacingGameOffroadWheelRear()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameOffroadWheelRear);
UIMPGA_RacingGameOffroadWheelRear::~UIMPGA_RacingGameOffroadWheelRear() {}
// ********** End Class UIMPGA_RacingGameOffroadWheelRear ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelRear_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelRear, UIMPGA_RacingGameOffroadWheelRear::StaticClass, TEXT("UIMPGA_RacingGameOffroadWheelRear"), &Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameOffroadWheelRear), 826902411U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelRear_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelRear_h__Script_IMPGA_RacingGame_2431052731{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelRear_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelRear_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
