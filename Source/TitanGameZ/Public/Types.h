/// Copyright (c) 2023 Wojciech Andrzej Banasiak. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Types.generated.h"



///############################################################################################################
UENUM(BlueprintType)
enum class EAmountOnDemandWithHide : uint8
{
	Unlimited		UMETA (DisplayName = "Unlimited", ToolTip = "Unlimited number"),
	Selected		UMETA (DisplayName = "Selected", ToolTip = "Selected amount"),
};


///############################################################################################################
USTRUCT(BlueprintType, meta = (UsesHierarchy))
struct FAmountOnDemandWithHide
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "TitanGameZ|Amount", meta = (ToolTip = "Behavior"))
	EAmountOnDemandWithHide Behavior = EAmountOnDemandWithHide::Unlimited;

	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "TitanGameZ|Amount", meta = (EditCondition = "Behavior == EAmountOnDemandWithHide::Selected", EditConditionHides, ToolTip = "Selected number"))
	int Amount = 1;
};

