#pragma once

#include "Student.h"
#include "Week.h"

class List
{
public:
	static List* Instance();

	vector<Student> GetStudents();
	vector<Week> GetWeeks();

private:
	static List* instance;
};

