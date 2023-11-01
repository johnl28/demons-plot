// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemonsPlotGameMode.h"
#include "DemonsPlotCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemonsPlotGameMode::ADemonsPlotGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
