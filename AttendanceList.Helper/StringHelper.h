#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StringHelper
{
public:
	static string ToLower(string input);
	static vector<string>& Split(const string &s, char delim, vector<string> &elems);
};