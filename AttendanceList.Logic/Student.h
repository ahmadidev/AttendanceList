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

	string getStrMidScore();
	string getStrFinalScore();

	static void AddStudent(Student student);
	static vector<Student> GetStudents();
	static bool HasStudent();
};

