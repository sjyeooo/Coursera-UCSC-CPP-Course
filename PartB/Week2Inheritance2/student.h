#ifndef _STUDENT_
#define _STUDENT_

class student {
public:
	enum year {
		fresh,
		soph,
		junior,
		senior,
		grad
	};

	student();

	student(const char* nm, int id, double g, student::year x);
	void print() const;

protected:
	int student_id;
	double gpa;
	year y;
	char name[30];
};


#endif // !_STUDENT_