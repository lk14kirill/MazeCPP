#include "Game.h"
#include <iostream>;
using namespace std;

void Game::Start()
{
	srand(time(0));
	cout << "The game was started." << endl;
	field = generation->GenerateField(width, height, 24);
	drawableField = generation->GenerateFilledField(width+1, height+1,borderSymbol);
    player->PlacePlayerRandomly(field, width, height);
	generation->SetExit(field, width, height, playerSymbol);
	generation->CopyFieldToField(field, drawableField, width, height);
	drawer->Draw(drawableField,width+1,height+1);
	Update();
}

void Game::Update()
{
	while(isGameEnded==0)
	{
		Vector2 direction = inputManager->GetDirection();
		player->TryToMove(direction, field,width,height);
		generation->CopyFieldToField(field, drawableField, width, height);
		drawer->Draw(drawableField, width+1, height+1);
		CheckForGameEnd();
	}
	EndGame();
}
void Game::CheckForGameEnd()
{
	if (player->foundExit)
		isGameEnded = true;
}
void  Game::EndGame()
{
}
void Game::FreeMemory()
{
	generation->FreeArray(field, width, height);
	generation->FreeArray(drawableField, width, height);
	delete generation;
	delete player;
	delete drawer;
	delete inputManager;
}


