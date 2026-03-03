// Copyright Epic Games, Inc. All Rights Reserved.

#include "Miller_GAM415GameMode.h"
#include "Miller_GAM415Character.h"
#include "UObject/ConstructorHelpers.h"

AMiller_GAM415GameMode::AMiller_GAM415GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
