// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllers/DualLinkPlayerController.h"
#include "PlayerStates/DualLinkPlayerState.h"
#include "Framework/GameModes/DualLinkGameMode.h"

void ADualLinkPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADualLinkPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}


void ADualLinkPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}