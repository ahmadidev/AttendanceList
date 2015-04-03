#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
public:
	string Id;
	string FirstName;
	string LastName;
	float MidScore;
	float FinalScore;

	static void AddStudent(Student student);
	static vector<Student> GetStudents();
	static bool HasStudent();
};

