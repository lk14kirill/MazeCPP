#include "Generation.h"
#include "Player.h"
#include "Drawer.h"
#include "Point.h"
#include "InputManager.h"
#include "Values.h"

#pragma once
class Game
{
public:
	void Start();

	bool isGameEnded = false;
	int width = 10, height = 10;
private:
	void Update();
	void CheckForGameEnd();
	void EndGame();
	void FreeMemory();

	char** field;
	char** drawableField;
	Generation * generation = new Generation();
	Player* player = new Player();
	Drawer *  drawer = new Drawer();
	InputManager * inputManager = new InputManager();
};
