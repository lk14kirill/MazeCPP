#include <cstdlib>;
#include <iostream>;
#include "Vector2.h"
using namespace std;
#pragma once
class Player
{
public:
	void PlacePlayerRandomly(char**,int,int);
	void TryToMove(Vector2,char**,int,int);

	bool foundExit = false;
	char playerSymbol = '@';
	int x;
	int y;
private:
	void CheckExit(char);
	bool CanMove(Vector2, char**,int,int);
	void Move(Vector2, char**);
};


