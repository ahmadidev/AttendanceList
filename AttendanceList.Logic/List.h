#pragma once

#include "Student.h"
#include "Week.h"

class List
{
public:
	static List* Instance();

	List();
	vector<Student> GetStudents();
	vector<Week> GetWeeks();

private:
	int num;
	static List *instance;

	vector<Student> students;
	vector<Week> weeks;
};

