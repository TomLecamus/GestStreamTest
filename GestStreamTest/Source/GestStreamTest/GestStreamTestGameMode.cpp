// Copyright Epic Games, Inc. All Rights Reserved.

#include "GestStreamTestGameMode.h"
#include "GestStreamTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGestStreamTestGameMode::AGestStreamTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
