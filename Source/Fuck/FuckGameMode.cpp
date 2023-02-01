// Copyright Epic Games, Inc. All Rights Reserved.

#include "FuckGameMode.h"
#include "FuckCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFuckGameMode::AFuckGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
