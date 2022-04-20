#include "Game.h"
#include <iostream>;
using namespace std;

char ** field;
bool isGameEnded;
int width, height;
void Game::Start()
{
	srand(time(0));
	cout << "The game was started." << endl;
	field = generation.GenerateField(width, height, 24);
    player.PlacePlayerRandomly(field, width, height);
	generation.SetExit(field, width, height, player.playerSymbol);
	drawer.Draw(field,width,height);
	Update();
}

void Game::Update()
{
	while(isGameEnded==0)
	{
		char key;
		cin >> key;
		Vector2 direction = inputManager.GetDirection(key);
		player.TryToMove(direction, field,width,height);
		drawer.Draw(field, width, height);
		CheckForGameEnd();
	}
	EndGame();
}
void Game::CheckForGameEnd()
{
	if (player.foundExit)
		isGameEnded = true;
}
void  Game::EndGame()
{
	generation.FreeArray(field, width, height);
}


