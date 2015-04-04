#pragma once

#include "DataProvider.h"

#include <fstream>

class FileDataProvider : public DataProvider
{
public:
	FileDataProvider();

	void AddStudent(Student student) override;
	void AddWeek(Week week) override;
	vector<Student> GetStudents() override;
	vector<Week> GetWeeks() override;

private:
	ofstream students_file;
};