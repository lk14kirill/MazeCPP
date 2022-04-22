#include <cstdlib>;
#include <iostream>;
#include "Vector2.h"
#include "Values.h"
using namespace std;
#pragma once
class Player
{
public:
	void PlacePlayerRandomly(char** field,int width,int height);
	void TryToMove(Vector2 direction,char** field,int width,int height);

	bool foundExit = false;
	int x;
	int y;
private:
	void CheckExit(char symbol);
	bool IsOutsideField(int newX, int newY, int width, int height);
	bool CanMove(Vector2 direction, char** field,int width,int height);
	void Move(Vector2 direction, char** field);
};


