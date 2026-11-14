// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "DualLinkPlayerController.generated.h"
class ADualLinkGameMode;

/**
 * 
 */
UCLASS()
class DUALLINK_API ADualLinkPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
	virtual void OnPossess(APawn* InPawn) override;
	
	virtual void SetupInputComponent() override;
	
};
