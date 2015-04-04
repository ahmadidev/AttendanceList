#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
public:
	Student();

	string Id;
	string FirstName;
	string LastName;
	float MidScore;
	float FinalScore;

	string GetStrMidScore();
	string GetStrFinalScore();

	void SetMidScore(string score);
	void SetFinalScore(string score);

	static void AddStudent(Student student);
	static vector<Student> GetStudents();
	static bool HasStudent();
};

