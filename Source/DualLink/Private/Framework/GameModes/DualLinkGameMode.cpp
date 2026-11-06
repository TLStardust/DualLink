// Copyright Epic Games, Inc. All Rights Reserved.

#include "../../../Public/Framework/GameModes/DualLinkGameMode.h"
#include "../../../Public/Characters/DualLinkCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/GameStateBase.h"
#include "../../../Public/Test/DualLinkTestActor.h"

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
	
	SpawnNetworkTestActor();
	
}

void ADualLinkGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
}

void ADualLinkGameMode::SpawnNetworkTestActor()
{
	if (HasAuthority())
	{
		FActorSpawnParameters SpawnParams;

		SpawnedTestActor =
			GetWorld()->SpawnActor<ADualLinkTestActor>(
				DualLinkPlayerTestActorClass,
				FVector(1340.0f, 1170.0f, 60.0f),
				FRotator::ZeroRotator,
				SpawnParams
			);
	}
}

void ADualLinkGameMode::MoveNetworkTestActor()
{
	if (!IsValid(SpawnedTestActor)||!HasAuthority())
	{
		return;
	}
	FVector CurrentLocation = SpawnedTestActor->GetActorLocation();
	FVector NewLocation = CurrentLocation + FVector(300.0f, 0.0f, 0.0f);
	SpawnedTestActor->SetActorLocation(NewLocation);
	
	GetWorld()->GetTimerManager().SetTimer(
	DestroyActorTimerHandle,
	this,
	&ADualLinkGameMode::DestroyNetworkTestActor,
	5.0f,
	false
);
}

void ADualLinkGameMode::DestroyNetworkTestActor()
{
	if (!IsValid(SpawnedTestActor)||!HasAuthority())
	{
		return;
	}
	
	SpawnedTestActor->Destroy();
	SpawnedTestActor = nullptr;
}


void ADualLinkGameMode::HandleClientMoveRequest(
	APlayerController* RequestingController)
{
	// 1. 确认服务器权威
	if (!HasAuthority())
	{
		return;
	}

	// 2. 检查请求者是否有效
	if (!IsValid(RequestingController))
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Server] Invalid Requesting Controller.")
		);

		return;
	}

	// 3. 检查测试 Actor 是否有效
	if (!IsValid(SpawnedTestActor))
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Server] Test Actor Is Invalid.")
		);

		return;
	}

	// 4. 获取请求玩家的 Pawn
	APawn* RequestingPawn = RequestingController->GetPawn();

	if (!IsValid(RequestingPawn))
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Server] Requesting Pawn Is Invalid.")
		);

		return;
	}
	

	// 6. 服务器执行移动
	const FVector NewLocation =
		SpawnedTestActor->GetActorLocation()
		+ FVector(300.0f, 0.0f, 0.0f);

	const bool bMoved = SpawnedTestActor->SetActorLocation(NewLocation);

	if (bMoved)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Server] Test Actor Moved Successfully. Requester: %s"),
			*RequestingController->GetName()
		);
	}
	else
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Server] SetActorLocation Failed.")
		);
	}
}