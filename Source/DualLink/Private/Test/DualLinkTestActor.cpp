// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/DualLinkTestActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ADualLinkTestActor::ADualLinkTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//UE_LOG(LogTemp, Warning, TEXT("[TestActor] Constructor"));
	
	bReplicates = true;
	SetReplicateMovement(true);
	
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;


}

// Called when the game starts or when spawned
void ADualLinkTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADualLinkTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	

}

void ADualLinkTestActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//UE_LOG(LogTemp, Warning, TEXT("[TestActor] PostInitializeComponents"));
}

void ADualLinkTestActor::EndPlay(
	const EEndPlayReason::Type EndPlayReason)
{
	
	Super::EndPlay(EndPlayReason);
}