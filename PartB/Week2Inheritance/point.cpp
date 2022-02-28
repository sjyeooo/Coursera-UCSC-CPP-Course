#include "duo.cpp"
#include <cmath>


class point :public duo<double> {

public:
	point() :duo() {}
	point(double x, double y = 0.0) :duo<double>(x, y) {}
	virtual double length() { return std::sqrt(first * first + second * second); }

};

//Final means no further inheritance
class point3d final :public point {
public:
	point3d() :
		point(), 
		z(0.0) {
	}
	double length() { return sqrt(first * first + second * second + z * z); }

	void set_z(double d) { z = d; }

	double get_z() { return z; }

private:
	double z;
};