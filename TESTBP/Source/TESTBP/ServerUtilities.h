// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ServerUtilities.generated.h"

/**
 * 
 */
UCLASS()
class TESTBP_API UServerUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category="ServerUtilities")
		static FString ConvertBytesToFString(TArray<uint8> bytes);
	UFUNCTION(BlueprintCallable, Category="ServerUtilities")
		static TArray<int> ConvertFStringToIntArray(FString string);
	UFUNCTION(BlueprintCallable, Category="ServerUtilities")
		static FString ConvertIntArrayToFstring(TArray<int> intArray);
};
