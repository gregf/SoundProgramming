// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameSportsWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameSportsWheelFront() {}

// ********** Begin Cross Module References ********************************************************
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameWheelFront();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameSportsWheelFront ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront;
UClass* UIMPGA_RacingGameSportsWheelFront::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameSportsWheelFront;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameSportsWheelFront"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameSportsWheelFront,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_NoRegister()
{
	return UIMPGA_RacingGameSportsWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "SportsCar/IMPGA_RacingGameSportsWheelFront.h" },
		{ "ModuleRelativePath", "SportsCar/IMPGA_RacingGameSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameSportsWheelFront constinit property declarations ********
// ********** End Class UIMPGA_RacingGameSportsWheelFront constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameSportsWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIMPGA_RacingGameWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics::ClassParams = {
	&UIMPGA_RacingGameSportsWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameSportsWheelFront::StaticRegisterNativesUIMPGA_RacingGameSportsWheelFront()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameSportsWheelFront);
UIMPGA_RacingGameSportsWheelFront::~UIMPGA_RacingGameSportsWheelFront() {}
// ********** End Class UIMPGA_RacingGameSportsWheelFront ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelFront_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameSportsWheelFront, UIMPGA_RacingGameSportsWheelFront::StaticClass, TEXT("UIMPGA_RacingGameSportsWheelFront"), &Z_Registration_Info_UClass_UIMPGA_RacingGameSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameSportsWheelFront), 497677746U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelFront_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelFront_h__Script_IMPGA_RacingGame_3639185654{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelFront_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_SportsCar_IMPGA_RacingGameSportsWheelFront_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
