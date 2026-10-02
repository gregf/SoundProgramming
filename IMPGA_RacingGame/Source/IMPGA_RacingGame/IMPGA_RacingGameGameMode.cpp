// Copyright Epic Games, Inc. All Rights Reserved.

#include "IMPGA_RacingGameGameMode.h"
#include "IMPGA_RacingGamePlayerController.h"

AIMPGA_RacingGameGameMode::AIMPGA_RacingGameGameMode()
{
	PlayerControllerClass = AIMPGA_RacingGamePlayerController::StaticClass();
}
