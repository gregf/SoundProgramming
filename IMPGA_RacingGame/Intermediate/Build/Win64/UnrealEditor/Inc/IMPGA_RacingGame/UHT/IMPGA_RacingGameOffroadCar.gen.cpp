// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameOffroadCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameOffroadCar() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGameOffroadCar();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIMPGA_RacingGameOffroadCar **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar;
UClass* AIMPGA_RacingGameOffroadCar::GetPrivateStaticClass()
{
	using TClass = AIMPGA_RacingGameOffroadCar;
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameOffroadCar"),
			Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar.InnerSingleton,
			StaticRegisterNativesAIMPGA_RacingGameOffroadCar,
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
	return Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar.InnerSingleton;
}
UClass* Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_NoRegister()
{
	return AIMPGA_RacingGameOffroadCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Offroad car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offroad car wheeled vehicle implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chassis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chassis static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chassis static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FL Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FR Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireRearLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RL Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireRearRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/IMPGA_RacingGameOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RR Tire static mesh" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIMPGA_RacingGameOffroadCar constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chassis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIMPGA_RacingGameOffroadCar constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIMPGA_RacingGameOffroadCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics

// ********** Begin Class AIMPGA_RacingGameOffroadCar Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_Chassis = { "Chassis", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGameOffroadCar, Chassis), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chassis_MetaData), NewProp_Chassis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireFrontLeft = { "TireFrontLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGameOffroadCar, TireFrontLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFrontLeft_MetaData), NewProp_TireFrontLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireFrontRight = { "TireFrontRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGameOffroadCar, TireFrontRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFrontRight_MetaData), NewProp_TireFrontRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireRearLeft = { "TireRearLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGameOffroadCar, TireRearLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireRearLeft_MetaData), NewProp_TireRearLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireRearRight = { "TireRearRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGameOffroadCar, TireRearRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireRearRight_MetaData), NewProp_TireRearRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_Chassis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireFrontLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireFrontRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireRearLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::NewProp_TireRearRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::PropPointers) < 2048);
// ********** End Class AIMPGA_RacingGameOffroadCar Property Definitions ***************************
UObject* (*const Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIMPGA_RacingGamePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::ClassParams = {
	&AIMPGA_RacingGameOffroadCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::Class_MetaDataParams)
};
void AIMPGA_RacingGameOffroadCar::StaticRegisterNativesAIMPGA_RacingGameOffroadCar()
{
}
UClass* Z_Construct_UClass_AIMPGA_RacingGameOffroadCar()
{
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar.OuterSingleton, Z_Construct_UClass_AIMPGA_RacingGameOffroadCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIMPGA_RacingGameOffroadCar);
AIMPGA_RacingGameOffroadCar::~AIMPGA_RacingGameOffroadCar() {}
// ********** End Class AIMPGA_RacingGameOffroadCar ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadCar_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIMPGA_RacingGameOffroadCar, AIMPGA_RacingGameOffroadCar::StaticClass, TEXT("AIMPGA_RacingGameOffroadCar"), &Z_Registration_Info_UClass_AIMPGA_RacingGameOffroadCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIMPGA_RacingGameOffroadCar), 2366827427U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadCar_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadCar_h__Script_IMPGA_RacingGame_977659424{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadCar_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_OffroadCar_IMPGA_RacingGameOffroadCar_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
