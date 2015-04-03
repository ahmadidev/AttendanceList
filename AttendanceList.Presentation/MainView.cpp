#include "MainView.h"

#include "Student.h"
#include "InputHelper.h"
#include "AddingStudentsView.h"
#include "StudentsListView.h"

using namespace std;

MainView::MainView() : BaseView("Home")
{}

void MainView::Start()
{
	if (Student::HasStudent())
	{
		StudentsListView view;
		view.Start();
	}
	else
	{
		cout << "Welcome,\n"
			<< "It seems you haven't added your students yet.\n"
			<< "Press Enter to start adding students...";

		InputHelper::WaitForEnter();

		AddingStudentsView view;
		view.Start();
	}
}

void MainView::Exit()
{
	//any actions before exit?
}