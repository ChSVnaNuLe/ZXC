#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

using namespace std;

void printMap(char** m, int* h, int* w);
void clearscreen();


int main() {
	int height, width;
	cout << "Enter height and width of a map:  ";
	cin >> height >> width;
	int x = 8, y = 6;
	char** map = new char* [height];
	for (int i = 0; i < height; i++) {
		map[i] = new char[width];
		for (int j = 0; j < width; j++) {
			map[i][j] = ' ';
		}
	}
	map[x][y] = '#';
	map[x + 1][y] = '#';
	map[x + 2][y] = '#';
	map[x + 1][y - 1] = '#';
	map[x + 1][y + 1] = '#';
	map[x + 3][y - 1] = '#';
	map[x + 3][y + 1] = '#';


	char move;

	while (true)
	{
		clearscreen();
		move = _getch();
		printMap(map, &height, &width);
		if (move == 'w' && x > 1)
		{
			map[x + 1][y + 2] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x][y] = ' ';
			map[x + 2][y - 2] = ' ';
			map[x + 2][y - 1] = ' ';
			map[x + 2][y + 2] = ' ';
			map[x + 2][y + 1] = ' ';
			map[x + 1][y] = ' ';
			map[x + 2][y] = ' ';
			map[x + 1][y - 1] = ' ';
			map[x + 3][y] = ' ';
			map[x + 4][y] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x + 3][y - 1] = ' ';
			map[x + 3][y + 1] = ' ';
			map[--x][y] = '#';
			map[x + 1][y] = '#';
			map[x + 2][y] = '#';
			map[x + 1][y - 1] = '#';
			map[x + 1][y + 1] = '#';
			map[x + 3][y - 1] = '#';
			map[x + 3][y + 1] = '#';

		}
		if (move == 's' && x < height - 2)
		{
			map[x][y] = ' ';
			map[x + 2][y - 2] = ' ';
			map[x + 2][y - 1] = ' ';
			map[x + 2][y + 2] = ' ';
			map[x + 2][y + 1] = ' ';
			map[x + 1][y + 2] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x + 1][y] = ' ';
			map[x + 2][y] = ' ';
			map[x + 1][y - 1] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x + 3][y - 1] = ' ';
			map[x + 3][y + 1] = ' ';
			map[++x][y] = ' ';
			map[x + 3][y] = '#';
			map[x + 4][y] = '#';
			map[x + 2][y] = '#';
			map[x + 1][y - 1] = '#';
			map[x + 1][y + 1] = '#';
			map[x + 3][y - 1] = '#';
			map[x + 3][y + 1] = '#';
		}
		if (move == 'd' && y < width - 2)
		{
			map[x + 1][y + 2] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x][y] = ' ';
			map[x + 2][y - 2] = ' ';
			map[x + 2][y - 1] = ' ';
			map[x + 1][y] = ' ';
			map[x + 2][y] = ' ';
			map[x + 1][y - 1] = ' ';
			map[x + 3][y] = ' ';
			map[x + 4][y] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x + 3][y - 1] = ' ';
			map[x + 3][y + 1] = ' ';
			map[x][++y] = ' ';
			map[x + 1][y] = ' ';
			map[x + 2][y + 2] = '#';
			map[x + 2][y + 1] = '#';
			map[x + 2][y] = '#';
			map[x + 1][y - 1] = '#';
			map[x + 1][y + 1] = '#';
			map[x + 3][y - 1] = '#';
			map[x + 3][y + 1] = '#';
		}
		if (move == 'a' && y > 1)
		{
			map[x + 1][y + 2] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x][y] = ' ';
			map[x + 1][y] = ' ';
			map[x + 2][y] = ' ';
			map[x + 1][y - 1] = ' ';
			map[x + 3][y] = ' ';
			map[x + 4][y] = ' ';
			map[x + 1][y + 1] = ' ';
			map[x + 3][y - 1] = ' ';
			map[x + 3][y + 1] = ' ';
			map[x][--y] = ' ';
			map[x + 1][y] = ' ';
			map[x + 2][y - 2] = '#';
			map[x + 2][y - 1] = '#';
			map[x + 2][y] = '#';
			map[x + 1][y - 1] = '#';
			map[x + 1][y + 1] = '#';
			map[x + 3][y - 1] = '#';
			map[x + 3][y + 1] = '#';
		}
		if ((y < 5 and y>1) and ((x < 10 and x>1))) {
			break;
		}
		else if ((y > 1 and y < 34) and ((x > 30 and x < 39))) {
			break;
		}

		else if ((y > width - 7 and y < width - 1) and ((x > height - 10 and x < height - 1))) {
			break;
		}
		else if ((y > 28 and y < 34) and ((x > 10 and x < 31))) {
			break;
		}
		else if ((y > 7 and y < 14) and ((x > 40 and x < 49))) {
			break;
		}
	}

	return 0;
}
