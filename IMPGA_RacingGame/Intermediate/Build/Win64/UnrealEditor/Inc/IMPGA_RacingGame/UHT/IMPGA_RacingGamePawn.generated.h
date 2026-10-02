// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMPGA_RacingGamePawn.h"

#ifdef IMPGA_RACINGGAME_IMPGA_RacingGamePawn_generated_h
#error "IMPGA_RacingGamePawn.generated.h already included, missing '#pragma once' in IMPGA_RacingGamePawn.h"
#endif
#define IMPGA_RACINGGAME_IMPGA_RacingGamePawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIMPGA_RacingGamePawn ****************************************************
#define FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlippedCheck); \
	DECLARE_FUNCTION(execDoResetVehicle); \
	DECLARE_FUNCTION(execDoToggleCamera); \
	DECLARE_FUNCTION(execDoLookAround); \
	DECLARE_FUNCTION(execDoHandbrakeStop); \
	DECLARE_FUNCTION(execDoHandbrakeStart); \
	DECLARE_FUNCTION(execDoBrakeStop); \
	DECLARE_FUNCTION(execDoBrakeStart); \
	DECLARE_FUNCTION(execDoBrake); \
	DECLARE_FUNCTION(execDoThrottle); \
	DECLARE_FUNCTION(execDoSteering);


#define FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics;
IMPGA_RACINGGAME_API UClass* Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister();

#define FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIMPGA_RacingGamePawn(); \
	friend struct ::Z_Construct_UClass_AIMPGA_RacingGamePawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMPGA_RACINGGAME_API UClass* ::Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AIMPGA_RacingGamePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/IMPGA_RacingGame"), Z_Construct_UClass_AIMPGA_RacingGamePawn_NoRegister) \
	DECLARE_SERIALIZER(AIMPGA_RacingGamePawn)


#define FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIMPGA_RacingGamePawn(AIMPGA_RacingGamePawn&&) = delete; \
	AIMPGA_RacingGamePawn(const AIMPGA_RacingGamePawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIMPGA_RacingGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIMPGA_RacingGamePawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AIMPGA_RacingGamePawn) \
	NO_API virtual ~AIMPGA_RacingGamePawn();


#define FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_22_PROLOG
#define FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_CALLBACK_WRAPPERS \
	FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIMPGA_RacingGamePawn;

// ********** End Class AIMPGA_RacingGamePawn ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fasgr_Desktop_Games_engine_Unreal_Projects_IMPGA_RacingGame_Source_IMPGA_RacingGame_IMPGA_RacingGamePawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
