// Copyright Epic Games, Inc. All Rights Reserved.

#include "MGFPSGameMode.h"
#include "MGFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMGFPSGameMode::AMGFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
