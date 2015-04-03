#include "BaseView.h"
#include "WindowHelper.cpp"

BaseView::BaseView(string header)
{
	int width = WindowHelper::GetWidth();
	char ch = '=';

	system("cls");

	cout << string(width, ch)
		<< header << endl
		<< string(width, ch) << endl;
}