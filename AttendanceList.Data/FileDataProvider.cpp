#include "FileDataProvider.h"


FileDataProvider::FileDataProvider()
{
	students_file = ofstream("./Users.txt");

	if (!students_file)
		throw exception("Can not open Users.txt");
}

void FileDataProvider::AddStudent(Student student)
{
	cout << "Student Added" << endl;
}

void FileDataProvider::AddWeek(Week week)
{
	cout << "Week Added" << endl;
}

vector<Student> FileDataProvider::GetStudents()
{
	return vector<Student>();
}

vector<Week> FileDataProvider::GetWeeks()
{
	return vector<Week>();
}