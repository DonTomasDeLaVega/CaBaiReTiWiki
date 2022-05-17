// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BattleModeUtilities.generated.h" 


/**
 * 
 */
UCLASS()
class TESTBP_API UBattleModeUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	    UFUNCTION(BlueprintCallable, Category = "Battle")
        static void SetGridReferences(int index, int &left, int &right, int &up, int &down);
};
