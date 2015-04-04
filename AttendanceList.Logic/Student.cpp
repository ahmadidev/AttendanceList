#include "Student.h"

#include "DataProvider.h"
#include "List.h"

Student::Student()
{
	MidScore = -1;
	FinalScore = -1;
}

string Student::GetStrMidScore()
{
	return MidScore == -1 ? "" : to_string(MidScore);
}

string Student::GetStrFinalScore()
{
	return FinalScore == -1 ? "" : to_string(FinalScore);
}

void Student::SetMidScore(string score)
{
	MidScore = (score == "") ? -1 : stof(score);
}

void Student::SetFinalScore(string score)
{
	FinalScore = (score == "") ? -1 : stof(score);
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