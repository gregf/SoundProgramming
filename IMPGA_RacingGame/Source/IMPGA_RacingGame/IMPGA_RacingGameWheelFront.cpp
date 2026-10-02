// Copyright Epic Games, Inc. All Rights Reserved.

#include "IMPGA_RacingGameWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UIMPGA_RacingGameWheelFront::UIMPGA_RacingGameWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}