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
	//FString tempArray = StringArray[0];

	FString result;
	for (auto charRes : tempArray)
	{

		switch (charRes) {
		case ',':
			IntArray.Add(FCString::Atoi(*result));
			result = "";
			break;
		case ']':
			if (result != "")
				IntArray.Add(FCString::Atoi(*result));
			break;
		case '[':
			continue;
		default:
			result += charRes;
		}

		// if(charRes == ',')
		// {
		// 	IntArray.Add(FCString::Atoi(*result));
		// 	result = "";
		// }
		// else if (charRes == ']')
		// {
		// 	if(result != "")
		// 		IntArray.Add(FCString::Atoi(*result));
		// 	break;
		// }
		// else if(charRes != '[')
		// {
		// 	
		// }
	}

	return IntArray;
}

FString UServerUtilities::ConvertIntArrayToFstring(TArray<int> intArray)
{
	FString result = "";
	for (int i : intArray)
	{
		result += LexToString(i);
		result += ", ";
	}
	return result;
}