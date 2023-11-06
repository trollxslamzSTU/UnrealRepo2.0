// Copyright Epic Games, Inc. All Rights Reserved.

#include "C4EGameProjectGameMode.h"
#include "C4EGameProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC4EGameProjectGameMode::AC4EGameProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
