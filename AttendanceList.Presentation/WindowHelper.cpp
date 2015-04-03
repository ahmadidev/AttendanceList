#include "WindowHelper.h"

#include <Windows.h>

int WindowHelper::GetWidth()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi = GetConsoleScreenBufferInfo();

	return csbi.srWindow.Right - csbi.srWindow.Left + 1; // Window width
}

int WindowHelper::GetHeight()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi = GetConsoleScreenBufferInfo();

	return csbi.srWindow.Bottom - csbi.srWindow.Top + 1; // Window height
}

void WindowHelper::GoToXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void WindowHelper::Resize(int height, int width)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi = GetConsoleScreenBufferInfo();

	if (height == 0)
		height = GetHeight();

	if (width == 0)
		width = GetWidth();

	COORD coord;
	coord.X = width;
	coord.Y = height;

	SMALL_RECT r;
	r.Left = csbi.srWindow.Left;
	r.Top = csbi.srWindow.Top;

	r.Bottom = coord.Y - 1;
	r.Right = coord.X - 1;

	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &r);
}

CONSOLE_SCREEN_BUFFER_INFO WindowHelper::GetConsoleScreenBufferInfo()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	::GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi;
}