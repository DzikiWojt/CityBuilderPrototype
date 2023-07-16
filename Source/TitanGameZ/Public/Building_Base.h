// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building_Base.generated.h"

UCLASS()
class TITANGAMEZ_API ABuilding_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilding_Base();

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "Configuration", meta = (ExposeOnSpawn = "true", ToolTip = "Sequentially Executed Interactions"))
	TArray<class UInteraction_Base*> Interactions; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
