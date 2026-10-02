// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTrialTrackGate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTimeTrialTrackGate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_ATimeTrialTrackGate();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_ATimeTrialTrackGate_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimeTrialTrackGate ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATimeTrialTrackGate;
UClass* ATimeTrialTrackGate::GetPrivateStaticClass()
{
	using TClass = ATimeTrialTrackGate;
	if (!Z_Registration_Info_UClass_ATimeTrialTrackGate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TimeTrialTrackGate"),
			Z_Registration_Info_UClass_ATimeTrialTrackGate.InnerSingleton,
			StaticRegisterNativesATimeTrialTrackGate,
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
	return Z_Registration_Info_UClass_ATimeTrialTrackGate.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimeTrialTrackGate_NoRegister()
{
	return ATimeTrialTrackGate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimeTrialTrackGate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A track gate volume for a Time Trial racing game.\n *  Players must pass through the track gates in order to complete a lap.\n */" },
#endif
		{ "IncludePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A track gate volume for a Time Trial racing game.\nPlayers must pass through the track gates in order to complete a lap." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision Box */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision Box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFinishLine_MetaData[] = {
		{ "Category", "Track Gate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this is set to true, this track gate is considered the finish line and will increase the lap when passed */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is set to true, this track gate is considered the finish line and will increase the lap when passed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextMarker_MetaData[] = {
		{ "Category", "Track Gate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the next track marker in the sequence */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the next track marker in the sequence" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ATimeTrialTrackGate constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static void NewProp_bIsFinishLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinishLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATimeTrialTrackGate constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTrialTrackGate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATimeTrialTrackGate_Statics

// ********** Begin Class ATimeTrialTrackGate Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialTrackGate, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
void Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine_SetBit(void* Obj)
{
	((ATimeTrialTrackGate*)Obj)->bIsFinishLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine = { "bIsFinishLine", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATimeTrialTrackGate), &Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFinishLine_MetaData), NewProp_bIsFinishLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_NextMarker = { "NextMarker", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialTrackGate, NextMarker), Z_Construct_UClass_ATimeTrialTrackGate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextMarker_MetaData), NewProp_NextMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_NextMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers) < 2048);
// ********** End Class ATimeTrialTrackGate Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ATimeTrialTrackGate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::ClassParams = {
	&ATimeTrialTrackGate::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeTrialTrackGate_Statics::Class_MetaDataParams)
};
void ATimeTrialTrackGate::StaticRegisterNativesATimeTrialTrackGate()
{
}
UClass* Z_Construct_UClass_ATimeTrialTrackGate()
{
	if (!Z_Registration_Info_UClass_ATimeTrialTrackGate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeTrialTrackGate.OuterSingleton, Z_Construct_UClass_ATimeTrialTrackGate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeTrialTrackGate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATimeTrialTrackGate);
ATimeTrialTrackGate::~ATimeTrialTrackGate() {}
// ********** End Class ATimeTrialTrackGate ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_TimeTrial_TimeTrialTrackGate_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeTrialTrackGate, ATimeTrialTrackGate::StaticClass, TEXT("ATimeTrialTrackGate"), &Z_Registration_Info_UClass_ATimeTrialTrackGate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeTrialTrackGate), 1790074016U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_TimeTrial_TimeTrialTrackGate_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_TimeTrial_TimeTrialTrackGate_h__Script_IMPGA_RacingGame_218825123{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_TimeTrial_TimeTrialTrackGate_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_Variant_TimeTrial_TimeTrialTrackGate_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
