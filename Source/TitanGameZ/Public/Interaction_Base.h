// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Building_Base.h"
#include "Agent_Base.h"
#include "Types.h"
#include "Interaction_Base.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew)
class TITANGAMEZ_API UInteraction_Base : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION (BlueprintImplementableEvent, BlueprintCallable, Category = "TitanGameZ", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", Tooltip = "Do this interaction", DisplayName = "Do Interaction"))
	void DoInteraction (ABuilding_Base * Concerned_Building, AAgent_Base * Concerned_Agent); 

	UFUNCTION (BlueprintImplementableEvent, BlueprintCallable, Category = "TitanGameZ", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", Tooltip = "Stop this interaction", DisplayName = "Stop Interaction"))
	void StopInteraction (ABuilding_Base * Concerned_Building, AAgent_Base * Concerned_Agent); 

	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Configuration", meta = (ExposeOnSpawn = "true", DisplayName = "Max Interactions", Tooltip = "Maximum number of interaction (for whole building)"))
	FAmountOnDemandWithHide MaxInteractions;
};
