// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamTestMultiGameMode.h"
#include "SteamTestMultiCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamTestMultiGameMode::ASteamTestMultiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
