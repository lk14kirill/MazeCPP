#include <cstdlib>
#include "Values.h"

#pragma once
class Generation
{
public:
	char ** GenerateArray(int width, int height);
	char ** GenerateField(int width, int height,int wallPercentage);
	char ** GenerateFilledField(int width, int height, char symbol);
	void CopyFieldToField(char** from, char** to,int width,int height);
	void FreeArray(char** field, int width, int height);
	void SetExit(char** field,int width,int height,char exitSymbol);
private:
};

