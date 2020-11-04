// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdControllerGameMode.h"
#include "ThirdControllerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdControllerGameMode::AThirdControllerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
