// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MPTemplateGameMode.h"
#include "MPTemplateHUD.h"
#include "MPTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMPTemplateGameMode::AMPTemplateGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMPTemplateHUD::StaticClass();
}
