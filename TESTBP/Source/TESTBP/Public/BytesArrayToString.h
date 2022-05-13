// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BytesArrayToString.generated.h"

/**
 * 
 */
UCLASS()
class TESTBP_API UBytesArrayToString : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "BytesTo")
		static FString BytesToString(TArray<uint8> Bytes);
};
