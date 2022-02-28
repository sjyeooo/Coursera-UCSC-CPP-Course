#ifndef _GRAD_STUDENT_
#define _GRAD_STUDENT_

#include "student.h"

class grad_student :
	public student
{
public:
	enum support {
		ta,
		ra,
		fellowship,
		other
	};

	grad_student();
	grad_student(const char* nm, int id, double g, student::year x, grad_student::support t, const char* d, const char* th);

	void print() const;

protected:
	support s;
	char dept[10];
	char thesis[80];
};

#endif