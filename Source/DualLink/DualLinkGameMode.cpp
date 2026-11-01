// Copyright Epic Games, Inc. All Rights Reserved.

#include "DualLinkGameMode.h"
#include "DualLinkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADualLinkGameMode::ADualLinkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
