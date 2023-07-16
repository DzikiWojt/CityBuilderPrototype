// Fill out your copyright notice in the Description page of Project Settings.


#include "Agent_Base.h"

// Sets default values
AAgent_Base::AAgent_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAgent_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgent_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAgent_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

