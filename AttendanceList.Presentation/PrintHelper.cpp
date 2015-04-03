#include "PrintHelper.h"

#include <sstream>
#include <iomanip>

#include "WindowHelper.h"

using namespace std;

void PrintHelper::PrintLine(char fill)
{
	cout << setfill(fill) << setw(WindowHelper::GetWidth()) << fill;

	cout << setfill(' ');
}

string PrintHelper::Center(const string s, const int w) {
	stringstream ss, spaces;

	// count excess room to pad
	int padding = w - s.size();

	for (int i = 0; i < padding / 2; ++i)
		spaces << " ";

	// format with padding
	ss << spaces.str() << s << spaces.str();

	// if odd #, add 1 space
	if (padding>0 && padding % 2 != 0)
		ss << " ";

	return ss.str();
}