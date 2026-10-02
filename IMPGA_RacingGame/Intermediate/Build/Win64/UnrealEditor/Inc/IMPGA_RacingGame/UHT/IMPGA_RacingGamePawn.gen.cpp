// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMPGA_RacingGamePawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIMPGA_RacingGamePawn() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn();
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMPGA_RacingGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIMPGA_RacingGamePawn Function BrakeLights *******************************
struct IMPGA_RacingGamePawn_eventBrakeLights_Parms
{
	bool bBraking;
};
static FName NAME_AIMPGA_RacingGamePawn_BrakeLights = FName(TEXT("BrakeLights"));
void AIMPGA_RacingGamePawn::BrakeLights(bool bBraking)
{
	IMPGA_RacingGamePawn_eventBrakeLights_Parms Parms;
	Parms.bBraking=bBraking ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AIMPGA_RacingGamePawn_BrakeLights);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BrakeLights constinit property declarations ***************************
	static void NewProp_bBraking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BrakeLights constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BrakeLights Property Definitions **************************************
void Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::NewProp_bBraking_SetBit(void* Obj)
{
	((IMPGA_RacingGamePawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMPGA_RacingGamePawn_eventBrakeLights_Parms), &Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::NewProp_bBraking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::PropPointers) < 2048);
// ********** End Function BrakeLights Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "BrakeLights", 	Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::PropPointers), 
sizeof(IMPGA_RacingGamePawn_eventBrakeLights_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IMPGA_RacingGamePawn_eventBrakeLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AIMPGA_RacingGamePawn Function BrakeLights *********************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoBrake ***********************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics
{
	struct IMPGA_RacingGamePawn_eventDoBrake_Parms
	{
		float BrakeValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoBrake constinit property declarations *******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoBrake constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoBrake Property Definitions ******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::NewProp_BrakeValue = { "BrakeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGamePawn_eventDoBrake_Parms, BrakeValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::NewProp_BrakeValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::PropPointers) < 2048);
// ********** End Function DoBrake Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoBrake", 	Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::IMPGA_RacingGamePawn_eventDoBrake_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::IMPGA_RacingGamePawn_eventDoBrake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoBrake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrake(Z_Param_BrakeValue);
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoBrake *************************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoBrakeStart ******************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake start input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake start input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoBrakeStart constinit property declarations **************************
// ********** End Function DoBrakeStart constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoBrakeStart", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoBrakeStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrakeStart();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoBrakeStart ********************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoBrakeStop *******************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake stop input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake stop input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoBrakeStop constinit property declarations ***************************
// ********** End Function DoBrakeStop constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoBrakeStop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoBrakeStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrakeStop();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoBrakeStop *********************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoHandbrakeStart **************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle handbrake start input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle handbrake start input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoHandbrakeStart constinit property declarations **********************
// ********** End Function DoHandbrakeStart constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoHandbrakeStart", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoHandbrakeStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoHandbrakeStart();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoHandbrakeStart ****************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoHandbrakeStop ***************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle handbrake stop input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle handbrake stop input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoHandbrakeStop constinit property declarations ***********************
// ********** End Function DoHandbrakeStop constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoHandbrakeStop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoHandbrakeStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoHandbrakeStop();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoHandbrakeStop *****************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoLookAround ******************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics
{
	struct IMPGA_RacingGamePawn_eventDoLookAround_Parms
	{
		float YawDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle look input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle look input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoLookAround constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoLookAround constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoLookAround Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGamePawn_eventDoLookAround_Parms, YawDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::NewProp_YawDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::PropPointers) < 2048);
// ********** End Function DoLookAround Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoLookAround", 	Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::IMPGA_RacingGamePawn_eventDoLookAround_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::IMPGA_RacingGamePawn_eventDoLookAround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoLookAround)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_YawDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLookAround(Z_Param_YawDelta);
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoLookAround ********************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoResetVehicle ****************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle reset vehicle input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle reset vehicle input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoResetVehicle constinit property declarations ************************
// ********** End Function DoResetVehicle constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoResetVehicle", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoResetVehicle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoResetVehicle();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoResetVehicle ******************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoSteering ********************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics
{
	struct IMPGA_RacingGamePawn_eventDoSteering_Parms
	{
		float SteeringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle steering input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle steering input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoSteering constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoSteering constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoSteering Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::NewProp_SteeringValue = { "SteeringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGamePawn_eventDoSteering_Parms, SteeringValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::NewProp_SteeringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::PropPointers) < 2048);
// ********** End Function DoSteering Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoSteering", 	Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::IMPGA_RacingGamePawn_eventDoSteering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::IMPGA_RacingGamePawn_eventDoSteering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoSteering)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SteeringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoSteering(Z_Param_SteeringValue);
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoSteering **********************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoThrottle ********************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics
{
	struct IMPGA_RacingGamePawn_eventDoThrottle_Parms
	{
		float ThrottleValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle throttle input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle throttle input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoThrottle constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoThrottle constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoThrottle Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::NewProp_ThrottleValue = { "ThrottleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMPGA_RacingGamePawn_eventDoThrottle_Parms, ThrottleValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::NewProp_ThrottleValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::PropPointers) < 2048);
// ********** End Function DoThrottle Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoThrottle", 	Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::IMPGA_RacingGamePawn_eventDoThrottle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::IMPGA_RacingGamePawn_eventDoThrottle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoThrottle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrottleValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoThrottle(Z_Param_ThrottleValue);
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoThrottle **********************************

// ********** Begin Class AIMPGA_RacingGamePawn Function DoToggleCamera ****************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle toggle camera input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle toggle camera input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoToggleCamera constinit property declarations ************************
// ********** End Function DoToggleCamera constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "DoToggleCamera", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execDoToggleCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoToggleCamera();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function DoToggleCamera ******************************

// ********** Begin Class AIMPGA_RacingGamePawn Function FlippedCheck ******************************
struct Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if the car is flipped upside down and automatically resets it */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the car is flipped upside down and automatically resets it" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FlippedCheck constinit property declarations **************************
// ********** End Function FlippedCheck constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIMPGA_RacingGamePawn, nullptr, "FlippedCheck", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIMPGA_RacingGamePawn::execFlippedCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlippedCheck();
	P_NATIVE_END;
}
// ********** End Class AIMPGA_RacingGamePawn Function FlippedCheck ********************************

// ********** Begin Class AIMPGA_RacingGamePawn ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIMPGA_RacingGamePawn;
UClass* AIMPGA_RacingGamePawn::GetPrivateStaticClass()
{
	using TClass = AIMPGA_RacingGamePawn;
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGamePawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IMPGA_RacingGamePawn"),
			Z_Registration_Info_UClass_AIMPGA_RacingGamePawn.InnerSingleton,
			StaticRegisterNativesAIMPGA_RacingGamePawn,
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
	return Z_Registration_Info_UClass_AIMPGA_RacingGamePawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister()
{
	return AIMPGA_RacingGamePawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling and camera management.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IMPGA_RacingGamePawn.h" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling and camera management.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipCheckTime_MetaData[] = {
		{ "Category", "Flip Check" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time between automatic flip checks */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between automatic flip checks" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipCheckMinDot_MetaData[] = {
		{ "Category", "Flip Check" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum dot product value for the vehicle's up direction that we still consider upright */" },
#endif
		{ "ModuleRelativePath", "IMPGA_RacingGamePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum dot product value for the vehicle's up direction that we still consider upright" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIMPGA_RacingGamePawn constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipCheckTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipCheckMinDot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIMPGA_RacingGamePawn constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DoBrake"), .Pointer = &AIMPGA_RacingGamePawn::execDoBrake },
		{ .NameUTF8 = UTF8TEXT("DoBrakeStart"), .Pointer = &AIMPGA_RacingGamePawn::execDoBrakeStart },
		{ .NameUTF8 = UTF8TEXT("DoBrakeStop"), .Pointer = &AIMPGA_RacingGamePawn::execDoBrakeStop },
		{ .NameUTF8 = UTF8TEXT("DoHandbrakeStart"), .Pointer = &AIMPGA_RacingGamePawn::execDoHandbrakeStart },
		{ .NameUTF8 = UTF8TEXT("DoHandbrakeStop"), .Pointer = &AIMPGA_RacingGamePawn::execDoHandbrakeStop },
		{ .NameUTF8 = UTF8TEXT("DoLookAround"), .Pointer = &AIMPGA_RacingGamePawn::execDoLookAround },
		{ .NameUTF8 = UTF8TEXT("DoResetVehicle"), .Pointer = &AIMPGA_RacingGamePawn::execDoResetVehicle },
		{ .NameUTF8 = UTF8TEXT("DoSteering"), .Pointer = &AIMPGA_RacingGamePawn::execDoSteering },
		{ .NameUTF8 = UTF8TEXT("DoThrottle"), .Pointer = &AIMPGA_RacingGamePawn::execDoThrottle },
		{ .NameUTF8 = UTF8TEXT("DoToggleCamera"), .Pointer = &AIMPGA_RacingGamePawn::execDoToggleCamera },
		{ .NameUTF8 = UTF8TEXT("FlippedCheck"), .Pointer = &AIMPGA_RacingGamePawn::execFlippedCheck },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_BrakeLights, "BrakeLights" }, // 1705147050
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrake, "DoBrake" }, // 1888060349
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStart, "DoBrakeStart" }, // 909326356
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoBrakeStop, "DoBrakeStop" }, // 1519537098
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStart, "DoHandbrakeStart" }, // 4174044842
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoHandbrakeStop, "DoHandbrakeStop" }, // 3294863188
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoLookAround, "DoLookAround" }, // 2061849637
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoResetVehicle, "DoResetVehicle" }, // 275003180
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoSteering, "DoSteering" }, // 641456015
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoThrottle, "DoThrottle" }, // 1299885166
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_DoToggleCamera, "DoToggleCamera" }, // 3230075950
		{ &Z_Construct_UFunction_AIMPGA_RacingGamePawn_FlippedCheck, "FlippedCheck" }, // 3330235882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIMPGA_RacingGamePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics

// ********** Begin Class AIMPGA_RacingGamePawn Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontSpringArm_MetaData), NewProp_FrontSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, FrontCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontCamera_MetaData), NewProp_FrontCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSpringArm_MetaData), NewProp_BackSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, BackCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamera_MetaData), NewProp_BackCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringAction_MetaData), NewProp_SteeringAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrottleAction_MetaData), NewProp_ThrottleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeAction_MetaData), NewProp_BrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeAction_MetaData), NewProp_HandbrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, LookAroundAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAroundAction_MetaData), NewProp_LookAroundAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, ToggleCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraAction_MetaData), NewProp_ToggleCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, ResetVehicleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetVehicleAction_MetaData), NewProp_ResetVehicleAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FlipCheckTime = { "FlipCheckTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, FlipCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipCheckTime_MetaData), NewProp_FlipCheckTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FlipCheckMinDot = { "FlipCheckMinDot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIMPGA_RacingGamePawn, FlipCheckMinDot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipCheckMinDot_MetaData), NewProp_FlipCheckMinDot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FrontSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FrontCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_BackSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_BackCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_SteeringAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_ThrottleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_BrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_HandbrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_LookAroundAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_ToggleCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_ResetVehicleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FlipCheckTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::NewProp_FlipCheckMinDot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::PropPointers) < 2048);
// ********** End Class AIMPGA_RacingGamePawn Property Definitions *********************************
UObject* (*const Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_IMPGA_RacingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::ClassParams = {
	&AIMPGA_RacingGamePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::Class_MetaDataParams)
};
void AIMPGA_RacingGamePawn::StaticRegisterNativesAIMPGA_RacingGamePawn()
{
	UClass* Class = AIMPGA_RacingGamePawn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::Funcs));
}
UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn()
{
	if (!Z_Registration_Info_UClass_AIMPGA_RacingGamePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIMPGA_RacingGamePawn.OuterSingleton, Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIMPGA_RacingGamePawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIMPGA_RacingGamePawn);
AIMPGA_RacingGamePawn::~AIMPGA_RacingGamePawn() {}
// ********** End Class AIMPGA_RacingGamePawn ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h__Script_IMPGA_RacingGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIMPGA_RacingGamePawn, AIMPGA_RacingGamePawn::StaticClass, TEXT("AIMPGA_RacingGamePawn"), &Z_Registration_Info_UClass_AIMPGA_RacingGamePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIMPGA_RacingGamePawn), 338106782U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h__Script_IMPGA_RacingGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h__Script_IMPGA_RacingGame_1007884584{
	TEXT("/Script/IMPGA_RacingGame"),
	Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h__Script_IMPGA_RacingGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_SoundProgramming_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h__Script_IMPGA_RacingGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
