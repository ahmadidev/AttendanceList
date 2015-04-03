#include "StringHelper.h"

#include <algorithm>

using namespace std;

string StringHelper::ToLower(string input)
{
	string ret = input;

	std::transform(ret.begin(), ret.end(), ret.begin(), ::tolower);

	return ret;
}