#include "student.h"
#include "grad_student.h"

int main()
{
	student s("Mae Pohl", 100, 3.425, student::year::fresh), * ps = &s;
	grad_student gs("Morris Pohl", 200, 3.2564, student::year::grad, grad_student::support::ta, "Pharmacy", "Retail Pharmacies"), *pgs;

	ps->print();	//student::print

	ps = pgs = &gs;


	ps->print();//student::print on variable gs because student::print has no virtual keyword
	pgs->print();//grad_student::print on variable gs
	// Note that this behaviour is due to the lack of the "virtual" keyword

	return 0;
}

