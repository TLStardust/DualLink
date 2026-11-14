// Copyright Epic Games, Inc. All Rights Reserved.

#include "../../../Public/Framework/GameModes/DualLinkGameMode.h"
#include "../../../Public/Characters/DualLinkCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/GameStateBase.h"

ADualLinkGameMode::ADualLinkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	PlayerControllerClass = ADualLinkPlayerController::StaticClass();

	PlayerStateClass = ADualLinkPlayerState::StaticClass();

	DefaultPawnClass = ADualLinkCharacter::StaticClass();
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADualLinkGameMode::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADualLinkGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
}
