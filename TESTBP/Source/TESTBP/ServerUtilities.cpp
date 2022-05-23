// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerUtilities.h"

#include <charconv>

FString UServerUtilities::ConvertBytesToFString(TArray<uint8> bytes)
{
	FString result = FString(UTF8_TO_TCHAR(bytes.GetData()));
	return result;
}

TArray<int> UServerUtilities::ConvertFStringToIntArray(FString string)
{
	TArray<FString> StringArray;
	StringArray.Add(string);

	TArray<int32> IntArray;
	for (auto Str : StringArray[0])
	{
		if(Str != '[' && Str != ',' && Str != ']'  && Str != ' ')
		{
			IntArray.Add(FCString::Atoi(&Str));
		}
		else if(Str == ']')
				break;
			
	}
	return IntArray;
}

FString UServerUtilities::ConvertIntArrayToFstring(TArray<int> intArray)
{
	FString result = "";
	for (auto i : intArray)
	{
		result += LexToString(i);
		result += ", ";
	}
	return result;
}