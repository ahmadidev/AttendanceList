#include "CheckingAttendanceView.h"

#include <conio.h>

#include "List.h"
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
		<< "Press X after absent students And just press Enter If he/she is present.\n\n";

	CheckAttendance();
}

void CheckingAttendanceView::CheckAttendance()
{
	Week week;
	week.Number = Week::GetLastWeekNumber() + 1;

	vector<Student> students = List::Instance()->GetStudents();

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

	cout << endl << "Okay , That's all.\n";

	if (week.AbsentStudents.size() > 0)
		cout << "We have " << week.AbsentStudents.size() << " absent students.\n";
	else
		cout << "We have no absent student. I feel weird!\n";

	cout << "To go back to student's list press Enter...";

	InputHelper::WaitForEnter();

	StudentsListView view;
	view.Start();
}