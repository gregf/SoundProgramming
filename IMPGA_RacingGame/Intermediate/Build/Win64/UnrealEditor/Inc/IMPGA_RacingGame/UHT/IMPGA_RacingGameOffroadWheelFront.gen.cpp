// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameOffroadWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameOffroadWheelFront() {}

// ********** Begin Cross Module References ********************************************************
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelFront();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameOffroadWheelFront ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront;
UClass* UIMPGA_RacingGameOffroadWheelFront::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameOffroadWheelFront;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameOffroadWheelFront"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameOffroadWheelFront,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_NoRegister()
{
	return UIMPGA_RacingGameOffroadWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "OffroadCar/IMPGA_RacingGameOffroadWheelFront.h" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameOffroadWheelFront constinit property declarations *******
// ********** End Class UIMPGA_RacingGameOffroadWheelFront constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIMPGA_RacingGameWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics::ClassParams = {
	&UIMPGA_RacingGameOffroadWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameOffroadWheelFront::StaticRegisterNativesUIMPGA_RacingGameOffroadWheelFront()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameOffroadWheelFront);
UIMPGA_RacingGameOffroadWheelFront::~UIMPGA_RacingGameOffroadWheelFront() {}
// ********** End Class UIMPGA_RacingGameOffroadWheelFront *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelFront_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameOffroadWheelFront, UIMPGA_RacingGameOffroadWheelFront::StaticClass, TEXT("UIMPGA_RacingGameOffroadWheelFront"), &Z_Registration_Info_UClass_UIMPGA_RacingGameOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameOffroadWheelFront), 4147060132U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelFront_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelFront_h__Script_IMPGA_RacingGame_133035583{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelFront_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadWheelFront_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
