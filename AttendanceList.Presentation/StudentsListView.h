#pragma once

#include <iostream>
#include <string>

#include "BaseView.h"
#include "Student.h"
#include "Week.h"

using namespace std;

class StudentsListView : BaseView
{
public:
	StudentsListView();
	void Start();

private:
	vector<Student> students;
	vector<Week> weeks;

	void PrintHeader();
	void PrintSutdents();
	void PrintFooter();
};