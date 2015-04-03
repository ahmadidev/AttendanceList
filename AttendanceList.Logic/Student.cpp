#include "Student.h"

void Student::AddStudent(Student student)
{
	//cout << "Not implemented Student::AddStudent" << endl;
}

vector<Student> Student::GetStudents()
{
	vector<Student> students;

	for (size_t i = 62; i < 70; i++)
	{
		Student s;
		s.FirstName = (char)i;
		s.LastName = (char)i;
		s.Id = (char)i;

		students.push_back(s);
	}

	//cout << "Not implemented Student::GetStudents" << endl;

	return students;
}

bool Student::HasStudent()
{
	//cout << "Not implemented Student::HasStudent" << endl;

	return false;
}