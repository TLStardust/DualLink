// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "DualLinkGameState.generated.h"

/**
 * 
 */
UCLASS()
class DUALLINK_API ADualLinkGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
};
