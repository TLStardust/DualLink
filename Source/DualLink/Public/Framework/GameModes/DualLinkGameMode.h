// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerControllers//DualLinkPlayerController.h"
#include "PlayerStates/DualLinkPlayerState.h"
#include "DualLinkGameMode.generated.h"

UCLASS(minimalapi)
class ADualLinkGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADualLinkGameMode();
	
	virtual void BeginPlay() override;
	
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TSubclassOf<class ADualLinkTestActor> DualLinkPlayerTestActorClass;
	
	UPROPERTY()
	TObjectPtr<ADualLinkTestActor> SpawnedTestActor;
	
	void SpawnNetworkTestActor();
	void MoveNetworkTestActor();
	void DestroyNetworkTestActor();
	
	FTimerHandle MoveActorTimerHandle;
	FTimerHandle DestroyActorTimerHandle;
	
	void HandleClientMoveRequest(APlayerController* RequestingController);
};



