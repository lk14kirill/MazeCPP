#include "Generation.h"
char ** Generation::GenerateField(int width,int height,int wallsPercentage) 
{
	char** field = GenerateArray(width, height);
	for(int i =0;i<width;i++)
	{
		for(int j=0;j<height;j++)
		{
			if(rand() % 100 <wallsPercentage)
			field[i][j] = '#';
			else
			field[i][j] = '.';
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
	  field[y][x] = '!';
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