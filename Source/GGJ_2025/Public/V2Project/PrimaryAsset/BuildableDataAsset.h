// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RessourceDataAsset.h"
#include "Engine/DataAsset.h"
#include "BuildableDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class GGJ_2025_API UBuildableDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
    	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag Tag;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMesh* Mesh;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TEnumAsByte<ETraceTypeQuery> TraceType;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<URessourceDataAsset*, int> RessourceNeed;
	
	
	//Functions Getter
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FGameplayTag& GetTag();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UStaticMesh* GetMesh();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TEnumAsByte<ETraceTypeQuery> GetTraceType();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TMap<URessourceDataAsset*, int> GetRessourceNeed();
	
};
