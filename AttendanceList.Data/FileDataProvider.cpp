#include "FileDataProvider.h"

#include "StringHelper.h"

FileDataProvider::FileDataProvider()
{
}

void FileDataProvider::AddStudent(Student student)
{
	ofstream students_file;

	students_file.open("Users.txt", ios_base::app);

	students_file
		<< student.FirstName << ';'
		<< student.LastName << ';'
		<< student.Id << ';'
		<< student.GetStrMidScore() << ';'
		<< student.GetStrFinalScore() << ';'
		<< endl;
}

void FileDataProvider::AddWeek(Week week)
{
	ofstream weeks_file;

	weeks_file.open("Weeks.txt", ios_base::app);

	weeks_file << week.Number << ';';

	for (Student student : week.AbsentStudents)
	{
		weeks_file << student.Id << ';';
	}

	weeks_file << endl;
}

vector<Student> FileDataProvider::GetStudents()
{
	vector<Student> students;

	ifstream students_file("Users.txt", ios::in);

	if (!students_file.is_open())
		return vector<Student>();

	for (string line; getline(students_file, line);)
	{
		Student student;
		vector<string> v;

		StringHelper::Split(line, ';', v);

		student.FirstName = v[0];
		student.LastName = v[1];
		student.Id = v[2];
		student.SetMidScore(v[3]);
		student.SetFinalScore(v[4]);

		students.push_back(student);
	}

	return students;
}

vector<Week> FileDataProvider::GetWeeks()
{
	vector<Week> weeks;

	ifstream weeks_file("Weeks.txt", ios::in);

	if (!weeks_file.is_open())
		return vector<Week>();

	for (string line; getline(weeks_file, line);)
	{
		Week week;
		vector<string> v;

		StringHelper::Split(line, ';', v);

		week.Number = stoi(v[0]);

		for (size_t i = 1; i < v.size(); i++)
		{
			Student abs;
			abs.Id = v[i];

			week.AbsentStudents.push_back(abs);
		}

		weeks.push_back(week);
	}

	return weeks;
}