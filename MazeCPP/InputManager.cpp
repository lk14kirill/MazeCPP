#include "InputManager.h"

Vector2 InputManager::GetDirection(char key)
{
	switch(key)
	{
	case'w':
	case'W':
		return Vector2(0, -1);
	case's':
	case'S':
		return Vector2(0, 1);
	case'a':
	case'A':
		return Vector2(-1, 0);
	case'd':
	case'D':
		return Vector2(1, 0);
	}
	return Vector2(0, 0);
}