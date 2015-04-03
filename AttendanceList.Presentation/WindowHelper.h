#pragma once

#include <Windows.h>

class WindowHelper
{
public:
	static int GetWidth();
	static int GetHeight();
	static void GoToXY(int x, int y);
	static void Resize(int height, int width);

private:
	static CONSOLE_SCREEN_BUFFER_INFO GetConsoleScreenBufferInfo();
};