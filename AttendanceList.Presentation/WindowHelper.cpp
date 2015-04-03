#pragma once

#include <Windows.h>

class WindowHelper
{
public:
	static int GetWidth()
	{
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
			return -1;
		else
			return csbi.srWindow.Right - csbi.srWindow.Left + 1; // Window width
	}

	static void GoToXY(int x, int y)
	{
		COORD coord;
		coord.X = x;
		coord.Y = y;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}
};

