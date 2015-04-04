#include "Week.h"

#include "DataProvider.h"
#include "List.h"

Week::Week()
{
	AbsentStudents = vector<Student>();
}

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
	DataProvider::Instance()->AddWeek(week);
}

vector<Week> Week::GetWeeks()
{
	return DataProvider::Instance()->GetWeeks();
}

int Week::GetLastWeekNumber()
{
	return GetWeeks().size();
}