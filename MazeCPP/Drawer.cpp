#include "Drawer.h"

void Drawer::Draw(char** field, int width, int height)
{
	system("CLS");
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++) 
		{
			cout << field[i][j];
	    }
		cout << endl;
	}
}