#pragma once

#include "Student.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Week
{
public:
	int Number;
	vector<Student> AbsentStudents;
	const int TotalWeeks = 16;

	static void AddWeek(Week week);
	static vector<Week> GetWeeks();
	static int GetLastWeekNumber();
};

