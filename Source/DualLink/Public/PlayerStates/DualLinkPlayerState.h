// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "DualLinkPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class DUALLINK_API ADualLinkPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
};
