#include "CheckingAttendanceView.h"

#include <conio.h>

#include "Student.h"
#include "InputHelper.h"
#include "StringHelper.h"
#include "StudentsListView.h"

using namespace std;

CheckingAttendanceView::CheckingAttendanceView() : BaseView("Checking Students Attendance")
{}

void CheckingAttendanceView::Start()
{
	cout << "Attendance of #" << (Week::GetLastWeekNumber() + 1) << " week.\n"
		<< "Press Enter to skip student, or Press X to mark student as absent.\n\n";

	CheckAttendance();
}

void CheckingAttendanceView::CheckAttendance()
{
	Week week;
	week.Number = Week::GetLastWeekNumber() + 1;

	vector<Student> students = Student::GetStudents();

	for (Student student : students)
	{
		cout << student.FirstName << ' ' << student.LastName << ':';

		char attendance = tolower(_getche());

		cout << endl;

		if (attendance == 'x')
			week.AbsentStudents.push_back(student);
	}

	Finish(week);
}

void CheckingAttendanceView::Finish(Week week)
{
	Week::AddWeek(week);

	cout << endl << "OK, we finished checking attendance of this week.\n";

	if (week.AbsentStudents.size() > 0)
		cout << "We have " << week.AbsentStudents.size() << " absent students.\n";
	else
		cout << "We have no absent student. I feel weird!\n";

	cout << "Press Enter to go back to Student list...";

	InputHelper::WaitForEnter();

	StudentsListView view;
	view.Start();
}