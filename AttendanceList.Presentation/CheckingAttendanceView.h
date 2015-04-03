#pragma once

#include <iostream>

#include "BaseView.h"
#include "Week.h"

using namespace std;

class CheckingAttendanceView : BaseView
{
public:
	CheckingAttendanceView();
	void Start();

private:
	void CheckAttendance();
	void Finish(Week week);
};