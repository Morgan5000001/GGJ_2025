// Fill out your copyright notice in the Description page of Project Settings.


#include "V2Project/PrimaryAsset/ReceipeDataAsset.h"

#include "EditorCategoryUtils.h"

TArray<FRessource> URecipeDataAsset::GetInputs()
{
	return Inputs;
}

FRessource URecipeDataAsset::GetRessourceOut()
{
	return Output;
}

bool URecipeDataAsset::ContainsItem(URessourceDataAsset* ResourceInside)
{
	
	for (FRessource Input : Inputs)
	{
		if (Input.Resource == ResourceInside)
		{
			return true;
		}
	}
	return false;
}

bool URecipeDataAsset::ContainsAllItems(TArray<URessourceDataAsset*> AllRessourceInside)
{
	for (FRessource Input : Inputs)
	{
		for (URessourceDataAsset* ResourceInside : AllRessourceInside)
		{
			if (Input.Resource != ResourceInside)
			{
				return false;
			}
		}
	}
	return true;
}

bool URecipeDataAsset::CanCraft(const TMap<URessourceDataAsset*, int32>& AvailableResources) const
{
	for (const FRessource& Input : Inputs)
	{
		const int32* Quantity = AvailableResources.Find(Input.Resource);

		if (!Quantity || *Quantity < Input.Quantity)
		{
			return false;
		}
	}

	return true;
}
