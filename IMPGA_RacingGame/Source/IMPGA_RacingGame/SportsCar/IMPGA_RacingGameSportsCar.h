// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IMPGA_RacingGamePawn.h"
#include "IMPGA_RacingGameSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AIMPGA_RacingGameSportsCar : public AIMPGA_RacingGamePawn
{
	GENERATED_BODY()
	
public:

	AIMPGA_RacingGameSportsCar();
};
