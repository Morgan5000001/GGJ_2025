// Fill out your copyright notice in the Description page of Project Settings.


#include "V2Project/PrimaryAsset/BuildableDataAsset.h"

FPrimaryAssetId UBuildableDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId("Builds", GetFName());
}

FGameplayTag& UBuildableDataAsset::GetTag()
{
	return Tag;
}

UStaticMesh* UBuildableDataAsset::GetMesh()
{
	return Mesh;
}

UMaterialInterface* UBuildableDataAsset::GetMaterial()
{
	return Material;
}

TEnumAsByte<ETraceTypeQuery> UBuildableDataAsset::GetTraceType()
{
	return TraceType;
}

TMap<URessourceDataAsset*, int> UBuildableDataAsset::GetRessourceNeed()
{
	return RessourceNeed;
}
