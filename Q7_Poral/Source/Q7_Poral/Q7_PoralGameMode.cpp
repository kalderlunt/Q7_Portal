// Copyright Epic Games, Inc. All Rights Reserved.

#include "Q7_PoralGameMode.h"
#include "Q7_PoralCharacter.h"
#include "UObject/ConstructorHelpers.h"

AQ7_PoralGameMode::AQ7_PoralGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
