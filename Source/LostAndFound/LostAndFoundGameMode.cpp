// Copyright Epic Games, Inc. All Rights Reserved.

#include "LostAndFoundGameMode.h"
#include "LostAndFoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALostAndFoundGameMode::ALostAndFoundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
