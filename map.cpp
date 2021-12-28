#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

using namespace std;

void clearscreen()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}


void printMap(char** m, int* h, int* w) {
	for (int i = 0; i < *h; i++) {
		for (int j = 0; j < *w; j++) {
			if (i == 0 || i == *h - 1) { m[i][j] = '-'; }
			else if (j == 0 || j == *w - 1) { m[i][j] = '|'; }
			if ((j < 5 and j>1) and ((i < 10 and i>1))) {
				cout << "*";
			}
			else if ((j > 1 and j < 34) and ((i > 30 and i < 39))) {
				cout << "*";
			}

			else if ((j > *w - 7 and j < *w - 1) and ((i > *h - 10 and i < *h - 1))) {
				cout << "*";
			}
			else if ((j > 28 and j < 34) and ((i > 10 and i < 31))) {
				cout << "*";
			}
			else if ((j > 7 and j < 14) and ((i > 40 and i < 49))) {
				cout << "*";
			}
			else {
				cout << m[i][j];
			}
		}
		cout << endl;
	}
}