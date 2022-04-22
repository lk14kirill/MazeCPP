#include "Generation.h"
char ** Generation::GenerateField(int width,int height,int wallsPercentage) 
{
	char** field = GenerateArray(width, height);
	for(int i =0;i<width;i++)
	{
		for(int j=0;j<height;j++)
		{
			if(rand() % 100 <wallsPercentage)
			field[i][j] = wallSymbol;
			else
			field[i][j] = freeCellSymbol;
		}
	}
	return field;
}
char** Generation::GenerateFilledField(int width,int height,char fillSymbol)
{
	char** field = GenerateArray(width, height);
	for (int x = 0; x < width; x++)
	{
		for (int y = 0; y < height; y++)
		{
				field[y][x] = fillSymbol;
		}
	}
	return field;
}
void Generation::SetExit(char** field,int width,int height,char playerSymbol)
{
	while(true)
	{
	 int x = rand() % width;
	 int y = rand() % height;
	 if(field[y][x] != playerSymbol)
	 {
	  field[y][x] = exitSymbol;
	  return;
	 }
	}
}
char** Generation::GenerateArray(int width, int height)
{
	char** field = new char* [width];
	for (int i = 0; i < width; i++)
	{
		field[i] = new char[height];
	}
	return field;
}
void Generation::FreeArray(char** field,int width,int height)
{
	for(int i =0;i<width;i++)
	{
		delete[] field[i];
	}
	delete[] field;
}
void Generation::CopyFieldToField(char ** from,char ** to,int width,int height)
{
	char** field = GenerateArray(width, height);
	for (int x = 0; x < width; x++)
	{
		for (int y = 0; y < height; y++)
		{
			to[y][x] = from[y][x];
		}
	}
}