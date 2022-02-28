#include "Student.h"
#include <string.h>
#include <iostream>


student::student()
{
	strcpy_s(name, "");
	student::student_id = 0;
	student::gpa = 0;
	student::y = student::fresh;
}

student::student(const char* nm, int id, double g, student::year x) :
	student_id(id),
	gpa(g),
	y(x)
{
	strcpy_s(name, nm);
}

void student::print() const
{
	std::cout << name << "," << student_id << "," << y << "," << gpa << std::endl;
}
