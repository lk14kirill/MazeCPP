#include "Player.h"

void Player::PlacePlayerRandomly(char ** field,int width,int height)
{
	x = rand() % width;
	y = rand() % height;
	field[y][x] = playerSymbol;
}
void Player::TryToMove(Vector2 direction, char** field, int width,int height)
{
	if (CanMove(direction,field,width,height))
		Move(direction,field);
}
bool Player::CanMove(Vector2 direction, char** field, int width, int height)
{
	int newX = x + direction.x;
	int newY = y + direction.y;
	if (IsOutsideField(newX,newY,width,height))
		return false;
	if (field[newY][newX] != wallSymbol)
	{
		CheckExit(field[newY][newX]);
		return true;
	}
	else
		return false;
}
void Player::Move(Vector2 direction, char** field)
{
	field[y][x] = freeCellSymbol;
	x += direction.x;
	y += direction.y;
	field[y][x] = playerSymbol;
}
void Player::CheckExit(char symbol)
{
	if (symbol == exitSymbol)
		foundExit = true;
}
bool Player::IsOutsideField(int newX, int newY, int width, int height)
{
	if (newX >= width || newY >= height || newX < 0 || newY < 0)
		return true;
	else
		return false;
}
