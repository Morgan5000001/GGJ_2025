// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RessourceDataAsset.h"
#include "Engine/DataAsset.h"
#include "ReceipeDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FRecipeInput
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	URessourceDataAsset* Resource;

	UPROPERTY(EditDefaultsOnly)
	int32 Quantity;
};

UCLASS(BlueprintType)
class URecipeDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TArray<FRecipeInput> Inputs;

	UPROPERTY(EditDefaultsOnly)
	FRecipeInput Output;

	UPROPERTY(EditDefaultsOnly)
	float ProductionTime;

	// UPROPERTY(EditDefaultsOnly)
	// TSubclassOf<class AMachineBase> RequiredMachineClass;
};

