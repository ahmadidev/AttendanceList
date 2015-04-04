#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Student.h"

using namespace std;

class Week
{
public:
	Week();
	int Number;
	vector<Student> AbsentStudents;
	static const int TotalWeeks = 16;
	bool IsStudentAbsent(Student student);

	static void AddWeek(Week week);
	static vector<Week> GetWeeks();
	static int GetLastWeekNumber();
};

