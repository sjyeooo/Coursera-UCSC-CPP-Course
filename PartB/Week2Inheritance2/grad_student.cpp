#include "grad_student.h"
#include <string.h>
#include <iostream>

grad_student::grad_student()
{
	student();
	grad_student::s = grad_student::support::other;
	strcpy_s(grad_student::thesis, "");
	strcpy_s(grad_student::dept, "");
}

grad_student::grad_student(const char* nm, int id, double g, year x, support t, const char* d, const char* th) :
	student(nm, id, g, x),	// Use base class constructor
	s(t)
{
	strcpy_s(dept, d);
	strcpy_s(thesis, th);
}

void grad_student::print() const
{
	student::print();
	std::cout << dept << "," << s << std::endl
		<< thesis << std::endl;
}
