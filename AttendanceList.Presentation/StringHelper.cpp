#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class StringHelper
{
public:
	static string ToLower(string input)
	{
		string ret = input;

		std::transform(ret.begin(), ret.end(), ret.begin(), ::tolower);

		return ret;
	}
};