// Copyright Unreal Apocalypse. All Rights Reserved.

#include "UnrealApocalypseGameMode.h"
#include "UnrealApocalypseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealApocalypseGameMode::AUnrealApocalypseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
