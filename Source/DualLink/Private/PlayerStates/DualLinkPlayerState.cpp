// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStates/DualLinkPlayerState.h"

void ADualLinkPlayerState::BeginPlay()
{
	Super::BeginPlay();

	/*FString NetModeString;

	switch (GetNetMode())
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

	const FString InstanceName =
	GetNetMode() == NM_DedicatedServer
		? TEXT("DedicatedServer")
		: FString::Printf(
			TEXT("Client_%u"),
			FPlatformProcess::GetCurrentProcessId()
		);

	UE_LOG(LogTemp, Warning,
		TEXT("[%s][PID:%u][%s][PlayerState] Role: %s | Authority: %d | PlayerID: %d"),
		*InstanceName,
		FPlatformProcess::GetCurrentProcessId(),
		*GetPlayerName(),
		*UEnum::GetValueAsString(GetLocalRole()),
		HasAuthority(),
		GetPlayerId()
	);*/
	
	
}