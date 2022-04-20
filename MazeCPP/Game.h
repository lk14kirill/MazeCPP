#include "Generation.h"
#include "Player.h"
#include "Drawer.h"
#include "Point.h"
#include "InputManager.h"

#pragma once
class Game
{
public:
	void Start();

	bool IsGameEnded = false;
	int width = 10, height = 10;
private:
	void Update();
	void CheckForGameEnd();
	void EndGame();

	char **field;
	Generation generation;
	Player player;
	Drawer drawer;
	InputManager inputManager;
};
