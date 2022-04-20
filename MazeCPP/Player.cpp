#include "Player.h"
int x;
int y;
char playerSymbol;
void Player::PlacePlayerRandomly(char ** field,int width,int height)
{
	x = rand() % width;
	y = rand() % height;
	field[y][x] = playerSymbol;
}
void Player::TryToMove(Vector2 direction, char** field, int xSize,int ySize)
{
	if (CanMove(direction,field,xSize,ySize))
		Move(direction,field);
}
bool Player::CanMove(Vector2 direction, char** field, int xSize, int ySize)
{
	int newX = x + direction.x;
	int newY = y + direction.y;
	if (newX >= xSize || newY >= ySize ||
		newX < 0 || newY < 0)
		return false;
	if (field[newY][newX] != '#')
	{
		CheckExit(field[newY][newX]);
		return true;
	}
	else
		return false;
}
void Player::Move(Vector2 direction, char** field)
{
	field[y][x] = '.';
	x += direction.x;
	y += direction.y;
	field[y][x] = playerSymbol;
}
void Player::CheckExit(char symbol)
{
	if (symbol == '!')
		foundExit = true;

}
