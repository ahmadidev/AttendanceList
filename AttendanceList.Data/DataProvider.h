#pragma once

#include "Student.h"
#include "Week.h"

class DataProvider
{
public:
	static DataProvider* Instance();

	virtual void AddStudent(Student student) = 0;
	virtual void AddWeek(Week week) = 0;
	virtual vector<Student> GetStudents() = 0;
	virtual vector<Week> GetWeeks() = 0;

private:
	static DataProvider* instance;
};

