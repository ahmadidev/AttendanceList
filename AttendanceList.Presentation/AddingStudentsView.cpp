#include "AddingStudentsView.h"

#include <iostream>

#include "Student.h"
#include "InputHelper.h"
#include "CheckingAttendanceView.h"

using namespace std;

AddingStudentsView::AddingStudentsView() : BaseView("Adding Students")
{}

void AddingStudentsView::Start()
{
	cout << "Provide an empty student next to your last student to complete this process.\n"
		<< "Don't worry about their order. I will order them when you were done.\n"
		<< "Be careful in entering inputs. I don't know about their format, so I don't do validation.\n";

	AddStudents();
}

void AddingStudentsView::AddStudents()
{
	int totalAddedStudent = 0;

	while (true)
	{
		cout << endl;

		Student student;

		cout << "First name: ";
		getline(cin, student.FirstName);

		if (student.FirstName == "")
			break;

		cout << "Last name: ";
		cin >> student.LastName;

		cout << "ID: ";
		cin >> student.Id;
		cin.ignore();

		Student::AddStudent(student);
		totalAddedStudent++;
	}

	cout << endl;

	cout << "OK, I have added " << totalAddedStudent << " students to your list.\n"
		<< "Now lets check their attendance.\n"
		<< "Press Enter to proceed...";

	InputHelper::WaitForEnter();

	CheckingAttendanceView view;
	view.Start();
}