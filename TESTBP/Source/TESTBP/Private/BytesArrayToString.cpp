// Fill out your copyright notice in the Description page of Project Settings.


#include "BytesArrayToString.h"

FString UBytesArrayToString::BytesToString(TArray<uint8> Bytes)
{
	FString Result = FString(UTF8_TO_TCHAR(Bytes.GetData()));
	return Result;
}

