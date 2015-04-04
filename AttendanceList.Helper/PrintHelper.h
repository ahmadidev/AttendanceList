#pragma once

#include <iostream>
#include <string>

using namespace std;

class PrintHelper
{
public:
	static void PrintLine(char fill);
	string Center(const string s, const int w);
};