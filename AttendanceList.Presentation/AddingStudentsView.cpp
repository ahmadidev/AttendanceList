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
	cout << "Hey, If you want to add students you can in the field below.\n"
		<< "And if you want to finish adding student you can easily just not typing anything and enter.\n"
		<< "Don't  worry about their name's order. I'll order them as soon as possible! I mean next release :-)\n"
		<< "I can't check whether their names are valid or not so be CAREFUL in filling Inputs.\n";

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
	
	cout << "OK, I added " << totalAddedStudent << " student(s) to your list.\n"
		<< "Now lets check if they're absent or not.\n"
		<< "Press Enter to proceed...";

	InputHelper::WaitForEnter();

	CheckingAttendanceView view;
	view.Start();
}