// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGamePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGamePlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePlayerController();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePlayerController_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_UIMPGA_RacingGameUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIMPGA_RacingGamePlayerController Function OnPawnDestroyed ***************
struct Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics
{
	struct IMPGA_RacingGamePlayerController_eventOnPawnDestroyed_Parms
	{
		AActor* DestroyedPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles pawn destruction and respawning */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles pawn destruction and respawning" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnPawnDestroyed constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPawnDestroyed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPawnDestroyed Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::NewProp_DestroyedPawn = { "DestroyedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGamePlayerController_eventOnPawnDestroyed_Parms, DestroyedPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::NewProp_DestroyedPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::PropPointers) < 2048);
// ********** End Function OnPawnDestroyed Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePlayerController, nullptr, "OnPawnDestroyed", 	Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::IMPGA_RacingGamePlayerController_eventOnPawnDestroyed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::IMPGA_RacingGamePlayerController_eventOnPawnDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePlayerController::execOnPawnDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnDestroyed(Z_Param_DestroyedPawn);
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePlayerController Function OnPawnDestroyed *****************

// ********** Begin Class AIMPGA_RacingGamePlayerController ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController;
UClass* AIMPGA_RacingGamePlayerController::GetPrivateStaticClass()
{
	using TClass = AIMPGA_RacingGamePlayerController;
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGamePlayerController"),
			Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController.InnerSingleton,
			StaticRegisterNativesAIMPGA_RacingGamePlayerController,
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
	return Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AIMPGA_RacingGamePlayerController_NoRegister()
{
	return AIMPGA_RacingGamePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player Controller class\n *  Handles input mapping and user interface\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "IMPGA_RacingGamePlayerController.h" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player Controller class\nHandles input mapping and user interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the mobile controls widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the mobile controls widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTouchControls_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the player will use UMG touch controls even if not playing on mobile platforms */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the player will use UMG touch controls even if not playing on mobile platforms" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringWheelControls_MetaData[] = {
		{ "Category", "Input|Steering Wheel Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the optional steering wheel input mapping context will be registered */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the optional steering wheel input mapping context will be registered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelInputMappingContext_MetaData[] = {
		{ "Category", "Input|Steering Wheel Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Input Mapping Context to be used for steering wheel input.\n\x09 *  This is added alongside the default Input Mapping Context and does not block other forms of input.\n\x09 */" },
#endif
		{ "EditCondition", "bUseSteeringWheelControls" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Input Mapping Context to be used for steering wheel input.\nThis is added alongside the default Input Mapping Context and does not block other forms of input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclePawnClass_MetaData[] = {
		{ "Category", "Vehicle|Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of vehicle to automatically respawn when it's destroyed */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of vehicle to automatically respawn when it's destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "Vehicle|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the UI widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the UI widget" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIMPGA_RacingGamePlayerController constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileControlsWidget;
	static void NewProp_bForceTouchControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTouchControls;
	static void NewProp_bUseSteeringWheelControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringWheelControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringWheelInputMappingContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehiclePawnClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIMPGA_RacingGamePlayerController constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnPawnDestroyed"), .Pointer = &AIMPGA_RacingGamePlayerController::execOnPawnDestroyed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePlayerController_OnPawnDestroyed, "OnPawnDestroyed" }, // 2805750396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIMPGA_RacingGamePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics

// ********** Begin Class AIMPGA_RacingGamePlayerController Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileControlsWidget = { "MobileControlsWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, MobileControlsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidget_MetaData), NewProp_MobileControlsWidget_MetaData) };
void Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bForceTouchControls_SetBit(void* Obj)
{
	((AIMPGA_RacingGamePlayerController*)Obj)->bForceTouchControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bForceTouchControls = { "bForceTouchControls", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIMPGA_RacingGamePlayerController), &Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bForceTouchControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTouchControls_MetaData), NewProp_bForceTouchControls_MetaData) };
void Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit(void* Obj)
{
	((AIMPGA_RacingGamePlayerController*)Obj)->bUseSteeringWheelControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bUseSteeringWheelControls = { "bUseSteeringWheelControls", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIMPGA_RacingGamePlayerController), &Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringWheelControls_MetaData), NewProp_bUseSteeringWheelControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_SteeringWheelInputMappingContext = { "SteeringWheelInputMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, SteeringWheelInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringWheelInputMappingContext_MetaData), NewProp_SteeringWheelInputMappingContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_VehiclePawnClass = { "VehiclePawnClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, VehiclePawnClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclePawnClass_MetaData), NewProp_VehiclePawnClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, VehicleUIClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UIMPGA_RacingGameUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUIClass_MetaData), NewProp_VehicleUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_VehicleUI = { "VehicleUI", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePlayerController, VehicleUI), Z_Construct_UClass_UIMPGA_RacingGameUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUI_MetaData), NewProp_VehicleUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_MobileControlsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bForceTouchControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_bUseSteeringWheelControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_SteeringWheelInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_VehiclePawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_VehicleUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::NewProp_VehicleUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::PropPointers) < 2048);
// ********** End Class AIMPGA_RacingGamePlayerController Property Definitions *********************
UObject* (*const Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::ClassParams = {
	&AIMPGA_RacingGamePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::Class_MetaDataParams)
};
void AIMPGA_RacingGamePlayerController::StaticRegisterNativesAIMPGA_RacingGamePlayerController()
{
	UClass* Class = AIMPGA_RacingGamePlayerController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::Funcs));
}
UClass* Z_Construct_UClass_AIMPGA_RacingGamePlayerController()
{
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController.OuterSingleton, Z_Construct_UClass_AIMPGA_RacingGamePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController.OuterSingleton;
}
AIMPGA_RacingGamePlayerController::AIMPGA_RacingGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIMPGA_RacingGamePlayerController);
AIMPGA_RacingGamePlayerController::~AIMPGA_RacingGamePlayerController() {}
// ********** End Class AIMPGA_RacingGamePlayerController ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePlayerController_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIMPGA_RacingGamePlayerController, AIMPGA_RacingGamePlayerController::StaticClass, TEXT("AIMPGA_RacingGamePlayerController"), &Z_Registration_Info_UClass_AIMPGA_RacingGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIMPGA_RacingGamePlayerController), 582236480U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePlayerController_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePlayerController_h__Script_IMPGA_RacingGame_830940758{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePlayerController_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePlayerController_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
