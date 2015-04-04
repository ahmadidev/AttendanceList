#include "List.h"

List* List::instance = NULL;

List* List::Instance()
{
	if (instance == NULL)
		instance = new List;

	return instance;
}

List::List()
{
	students = Student::GetStudents();
	weeks = Week::GetWeeks();
}

vector<Student> List::GetStudents()
{
	return students;
}

vector<Week> List::GetWeeks()
{
	return weeks;
}