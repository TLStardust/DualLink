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
	
	InputComponent->BindKey(
	   EKeys::F,
	   IE_Pressed,
	   this,
	   &ADualLinkPlayerController::RequestMoveTestActor
   );
}

void ADualLinkPlayerController::RequestMoveTestActor()
{
	if (!IsLocalController())
	{
		return;
	}

	UE_LOG(
		LogTemp,
		Warning,
		TEXT("[Client Input] F Key Pressed. Sending Server RPC.")
	);

	Server_RequestMoveTestActor();
}

void ADualLinkPlayerController::Server_RequestMoveTestActor()
{
	UE_LOG(
		LogTemp,
		Warning,
		TEXT("[Server RPC] Received Move Request.")
	);

	ADualLinkGameMode* GameMode =
		GetWorld()->GetAuthGameMode<ADualLinkGameMode>();

	if (!GameMode)
	{
		UE_LOG(
			LogTemp,
			Error,
			TEXT("[Server RPC] GameMode Not Found.")
		);

		return;
	}

	GameMode->HandleClientMoveRequest(this);
}