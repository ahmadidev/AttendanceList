#include "Student.h"

#include "DataProvider.h"

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
	DataProvider::Instance()->AddStudent(student);
}

vector<Student> Student::GetStudents()
{
	return DataProvider::Instance()->GetStudents();
}

bool Student::HasStudent()
{
	return GetStudents().size() > 0;
}