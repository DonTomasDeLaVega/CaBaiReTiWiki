// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleModeUtilities.h"

void UBattleModeUtilities::SetGridReferences(int index, int &left, int &right, int &up, int &down)
{
	//Check right and left
	if(index % 5 == 0)
	{
		right = -1;
		left = index-1;
	}
	else if(index % 5 == 1)
	{
		left = -1;
		right = index+1;
	}
	else
	{
		left = index-1;
		right = index+1;
	}

	//Check up and down
	if(index+5>30)
	{
		up = -1;
		down = index-5;
	}
	else if(index-5<0)
	{
		down = -1;
		up = index+5;
	}
	else
	{
		down = index-5;
		up = index+5;
	}
}

