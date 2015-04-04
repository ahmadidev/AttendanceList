#include "StudentsListView.h"

#include <iomanip>
#include <conio.h>

#include "MainView.h"
#include "CheckingAttendanceView.h"
#include "InputHelper.h"
#include "WindowHelper.h"
#include "PrintHelper.h"

using namespace std;

StudentsListView::StudentsListView() : BaseView("Home")
{}

void StudentsListView::Start()
{
	students = Student::GetStudents();
	weeks = Week::GetWeeks();

	PrintHeader();
	PrintSutdents();
	PrintFooter();
}

void StudentsListView::PrintHeader()
{
	PrintHelper::PrintLine(' ');

	cout << left << setw(10) << "Name" << setw(10) << "Family";

	for (size_t i = 1; i <= Week::TotalWeeks; i++)
		cout << "| " << left << setw(2) << i << " ";

	cout << "| " << "Mid." << " ";
	cout << "| " << "Fin." << " ";

	cout << endl;;

	PrintHelper::PrintLine('-');
}

void StudentsListView::PrintSutdents()
{
	int spentWeeks = weeks.size();

	for (Student student : students)
	{
		cout << left << setw(10) << student.FirstName << setw(10) << student.LastName;

		for (Week week : weeks)
		{
			cout << "| " << left << setw(2) << (week.IsStudentAbsent(student) ? "X" : " ") << " ";
		}

		for (size_t i = spentWeeks; i < Week::TotalWeeks; i++)
		{
			cout << "|" << string(4, ' ');
		}

		cout << "| " << left << setw(4) << student.getStrMidScore() << " ";
		cout << "| " << left << setw(4) << student.getStrFinalScore() << " ";

		cout << endl;
		PrintHelper::PrintLine('-');
	}

	PrintHelper::PrintLine(' ');
}

void StudentsListView::PrintFooter()
{
	cout << "Press 'c' to check students attendance of #" << (Week::GetLastWeekNumber() + 1) << " week.\n"
		<< "Press 'q' to exit.";

	while (true)
	{
		char cmd = tolower(_getch());

		if (cmd == 'c')
		{
			CheckingAttendanceView atView;
			atView.Start();
			
			break;
		}
		else if (cmd == 'q')
		{
			MainView view;
			view.Exit();

			break;
		}
	}
}