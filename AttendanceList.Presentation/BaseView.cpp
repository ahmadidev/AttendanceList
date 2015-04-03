#include "BaseView.h"

#include "PrintHelper.h"

using namespace std;

BaseView::BaseView(string header)
{
	system("cls");

	PrintHelper::PrintLine('=');

	cout << header << endl;

	PrintHelper::PrintLine('=');
}