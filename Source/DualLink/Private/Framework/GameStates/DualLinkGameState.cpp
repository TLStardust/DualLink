// Fill out your copyright notice in the Description page of Project Settings.


#include "../../../Public/Framework/GameStates/DualLinkGameState.h"

void ADualLinkGameState::BeginPlay()
{
	Super::BeginPlay();

	/*ENetMode NetMode = GetNetMode();
	FString NetModeString;

	switch (NetMode)
	{
	case NM_Standalone:
		NetModeString = TEXT("Standalone");
		break;

	case NM_ListenServer:
		NetModeString = TEXT("ListenServer");
		break;

	case NM_DedicatedServer:
		NetModeString = TEXT("DedicatedServer");
		break;

	case NM_Client:
		NetModeString = TEXT("Client");
		break;

	default:
		NetModeString = TEXT("Unknown");
		break;
	}
	
	
	AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DualLinkGameState] NetMode: %s, Authority: %d,GameMode exists")
			, *NetModeString, HasAuthority());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[DualLinkGameState] NetMode: %s, Authority: %d,GameMode is nullptr")
			, *NetModeString, HasAuthority());
	}*/
}