#include <iostream>;
#include "Game.h"

using namespace std;
int main()
{
	Game * game = new Game();
	game->Start();
	delete game;
}
