#include "Student.h"

Student::Student()
{
	MidScore = -1;
	FinalScore = -1;
}

string Student::getStrMidScore()
{
	return MidScore == -1 ? "" : to_string(MidScore);
}

string Student::getStrFinalScore()
{
	return FinalScore == -1 ? "" : to_string(FinalScore);
}

void Student::AddStudent(Student student)
{
	//cout << "Not implemented Student::AddStudent" << endl;
}

vector<Student> Student::GetStudents()
{
	vector<Student> students;

	for (size_t i = 68; i < 75; i++)
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