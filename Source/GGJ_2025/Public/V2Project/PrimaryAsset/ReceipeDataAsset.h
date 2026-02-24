// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RessourceDataAsset.h"
#include "Engine/DataAsset.h"
#include "ReceipeDataAsset.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FRessource
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	URessourceDataAsset* Resource;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 Quantity;
};

UCLASS(BlueprintType)
class URecipeDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TArray<FRessource> Inputs;

	UPROPERTY(EditDefaultsOnly)
	FRessource Output;

	UPROPERTY(EditDefaultsOnly)
	float ProductionTime;

	// UPROPERTY(EditDefaultsOnly)
	// TSubclassOf<class AMachineBase> RequiredMachineClass;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FRessource> GetInputs();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FRessource GetRessourceOut();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ContainsItem(URessourceDataAsset* ResourceInside);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ContainsAllItems(TArray<URessourceDataAsset*> AllRessourceInside);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanCraft(const TMap<URessourceDataAsset*, int32>& AvailableResources) const;
};

