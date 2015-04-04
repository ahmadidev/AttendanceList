#include "Student.h"
#include "Week.h"

#include "MainView.h"
#include "StudentsListView.h"
#include "PrintHelper.h"
#include "WindowHelper.h"

#include "List.h"

using namespace std;

int main()
{
	WindowHelper::Resize(30, 120);

	MainView view;
	view.Start();

	//CheckingAttendanceView view;
	//view.Start();

	//StudentsListView view;
	//view.Start();

	return 0;
}