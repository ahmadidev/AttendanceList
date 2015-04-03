#include <iostream>

#include "BaseView.h"
#include "Student.h"
#include "InputHelper.cpp"
#include "AddingStudentsView.cpp"

using namespace std;

class MainView : BaseView
{
public:
	MainView() : BaseView("Home")
	{}

	void Start()
	{
		if (Student::HasStudent())
		{
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
};