// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGameUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGameUI() {}

// ********** Begin Cross Module References ********************************************************
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameUI();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMPGA_RacingGameUI Function OnGearUpdate ********************************
struct IMPGA_RacingGameUI_eventOnGearUpdate_Parms
{
	int32 NewGear;
};
static FName NAME_UIMPGA_RacingGameUI_OnGearUpdate = FName(TEXT("OnGearUpdate"));
void UIMPGA_RacingGameUI::OnGearUpdate(int32 NewGear)
{
	IMPGA_RacingGameUI_eventOnGearUpdate_Parms Parms;
	Parms.NewGear=NewGear;
	UFunction* Func = FindFunctionChecked(NAME_UIMPGA_RacingGameUI_OnGearUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new gear */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGameUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new gear" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnGearUpdate constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGearUpdate constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGearUpdate Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGameUI_eventOnGearUpdate_Parms, NewGear), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::NewProp_NewGear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::PropPointers) < 2048);
// ********** End Function OnGearUpdate Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMPGA_RacingGameUI, nullptr, "OnGearUpdate", 	Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::PropPointers), 
sizeof(IMPGA_RacingGameUI_eventOnGearUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IMPGA_RacingGameUI_eventOnGearUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UIMPGA_RacingGameUI Function OnGearUpdate **********************************

// ********** Begin Class UIMPGA_RacingGameUI Function OnSpeedUpdate *******************************
struct IMPGA_RacingGameUI_eventOnSpeedUpdate_Parms
{
	float NewSpeed;
};
static FName NAME_UIMPGA_RacingGameUI_OnSpeedUpdate = FName(TEXT("OnSpeedUpdate"));
void UIMPGA_RacingGameUI::OnSpeedUpdate(float NewSpeed)
{
	IMPGA_RacingGameUI_eventOnSpeedUpdate_Parms Parms;
	Parms.NewSpeed=NewSpeed;
	UFunction* Func = FindFunctionChecked(NAME_UIMPGA_RacingGameUI_OnSpeedUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new speed */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGameUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new speed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnSpeedUpdate constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSpeedUpdate constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSpeedUpdate Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGameUI_eventOnSpeedUpdate_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::PropPointers) < 2048);
// ********** End Function OnSpeedUpdate Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMPGA_RacingGameUI, nullptr, "OnSpeedUpdate", 	Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::PropPointers), 
sizeof(IMPGA_RacingGameUI_eventOnSpeedUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IMPGA_RacingGameUI_eventOnSpeedUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UIMPGA_RacingGameUI Function OnSpeedUpdate *********************************

// ********** Begin Class UIMPGA_RacingGameUI ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIMPGA_RacingGameUI;
UClass* UIMPGA_RacingGameUI::GetPrivateStaticClass()
{
	using TClass = UIMPGA_RacingGameUI;
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGameUI"),
			Z_Registration_Info_UClass_UIMPGA_RacingGameUI.InnerSingleton,
			StaticRegisterNativesUIMPGA_RacingGameUI,
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
	return Z_Registration_Info_UClass_UIMPGA_RacingGameUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameUI_NoRegister()
{
	return UIMPGA_RacingGameUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMPGA_RacingGameUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Vehicle HUD class\n *  Displays the current speed and gear.\n *  Widget setup is handled in a Blueprint subclass.\n */" },
#endif
		{ "IncludePath", "IMPGA_RacingGameUI.h" },
		{ "ModuleRelativePath", "IMPGA_RacingGameUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Vehicle HUD class\nDisplays the current speed and gear.\nWidget setup is handled in a Blueprint subclass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMPH_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the display of speed in Km/h or MPH */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGameUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the display of speed in Km/h or MPH" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIMPGA_RacingGameUI constinit property declarations **********************
	static void NewProp_bIsMPH_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMPH;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIMPGA_RacingGameUI constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMPGA_RacingGameUI_OnGearUpdate, "OnGearUpdate" }, // 3387034691
		{ &Z_Construct_UFunction_UIMPGA_RacingGameUI_OnSpeedUpdate, "OnSpeedUpdate" }, // 2894403632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMPGA_RacingGameUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIMPGA_RacingGameUI_Statics

// ********** Begin Class UIMPGA_RacingGameUI Property Definitions *********************************
void Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::NewProp_bIsMPH_SetBit(void* Obj)
{
	((UIMPGA_RacingGameUI*)Obj)->bIsMPH = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::NewProp_bIsMPH = { "bIsMPH", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIMPGA_RacingGameUI), &Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::NewProp_bIsMPH_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMPH_MetaData), NewProp_bIsMPH_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::NewProp_bIsMPH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::PropPointers) < 2048);
// ********** End Class UIMPGA_RacingGameUI Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::ClassParams = {
	&UIMPGA_RacingGameUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::Class_MetaDataParams)
};
void UIMPGA_RacingGameUI::StaticRegisterNativesUIMPGA_RacingGameUI()
{
}
UClass* Z_Construct_UClass_UIMPGA_RacingGameUI()
{
	if (!Z_Registration_Info_UClass_UIMPGA_RacingGameUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMPGA_RacingGameUI.OuterSingleton, Z_Construct_UClass_UIMPGA_RacingGameUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMPGA_RacingGameUI.OuterSingleton;
}
UIMPGA_RacingGameUI::UIMPGA_RacingGameUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIMPGA_RacingGameUI);
UIMPGA_RacingGameUI::~UIMPGA_RacingGameUI() {}
// ********** End Class UIMPGA_RacingGameUI ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameUI_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMPGA_RacingGameUI, UIMPGA_RacingGameUI::StaticClass, TEXT("UIMPGA_RacingGameUI"), &Z_Registration_Info_UClass_UIMPGA_RacingGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMPGA_RacingGameUI), 118203005U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameUI_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameUI_h__Script_IMPGA_RacingGame_2796430181{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameUI_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGameUI_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
