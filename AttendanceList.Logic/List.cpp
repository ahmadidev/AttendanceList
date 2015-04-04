#include "List.h"

List* List::instance = NULL;

List* List::Instance()
{
	if (instance == NULL)
		instance = new List;

	return instance;
}

vector<Student> List::GetStudents()
{
	return Student::GetStudents();
}

vector<Week> List::GetWeeks()
{
	return Week::GetWeeks();
}