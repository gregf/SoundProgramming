// Copyright Epic Games, Inc. All Rights Reserved.

#include "IMPGA_RacingGameWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UIMPGA_RacingGameWheelRear::UIMPGA_RacingGameWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}