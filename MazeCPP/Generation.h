#include <cstdlib>

#pragma once
class Generation
{
public:
	char ** GenerateField(int,int,int);
	void FreeArray(char**, int, int);
	void SetExit(char**,int,int,char);
private:
	char** GenerateArray(int, int);
};

