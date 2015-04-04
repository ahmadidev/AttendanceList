#include "StringHelper.h"

#include <algorithm>
#include <sstream>

using namespace std;

string StringHelper::ToLower(string input)
{
	string ret = input;

	std::transform(ret.begin(), ret.end(), ret.begin(), ::tolower);

	return ret;
}

vector<string>& StringHelper::Split(const string &s, char delim, vector<string> &elems)
{
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}