#include "Vector2.h"
#include <iostream>

using namespace std;
#pragma once
class InputManager
{ 
public:
	Vector2 GetDirection();
private:
	char GetInput();
};

