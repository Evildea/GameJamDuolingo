// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GameJamDuolingoGameMode.h"
#include "GameJamDuolingoHUD.h"
#include "GameJamDuolingoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJamDuolingoGameMode::AGameJamDuolingoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameJamDuolingoHUD::StaticClass();
}
