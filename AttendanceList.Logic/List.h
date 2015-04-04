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
	List();

	int num;
	static List *instance;

	vector<Student> students;
	vector<Week> weeks;
};

