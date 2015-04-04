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

	Student s;
	s.FirstName = "Erfan";
	s.LastName = "Ahmadi";
	s.Id = "931";

	Student::AddStudent(s);

	return 0;

	MainView view;
	view.Start();

	//CheckingAttendanceView view;
	//view.Start();

	//StudentsListView view;
	//view.Start();

	return 0;
}