// Fill out your copyright notice in the Description page of Project Settings.


#include "V2Project/PrimaryAsset/BuildableDataAsset.h"

FGameplayTag& UBuildableDataAsset::GetTag()
{
	return Tag;
}

UStaticMesh* UBuildableDataAsset::GetMesh()
{
	return Mesh;
}

TEnumAsByte<ETraceTypeQuery> UBuildableDataAsset::GetTraceType()
{
	return TraceType;
}

TMap<URessourceDataAsset*, int> UBuildableDataAsset::GetRessourceNeed()
{
	return RessourceNeed;
}
