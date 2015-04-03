#include "Week.h"

bool Week::IsStudentAbsent(Student student)
{
	for (Student absent : this->AbsentStudents)
	{
		if (student.Id == absent.Id)
			return true;
	}

	return false;
}

void Week::AddWeek(Week week)
{

}

vector<Week> Week::GetWeeks()
{
	vector<Week> weeks;

	Week week;
	week.Number = 1;
	week.AbsentStudents = Student::GetStudents();

	weeks.push_back(week);

	return weeks;
}

int Week::GetLastWeekNumber()
{
	return 0;
}