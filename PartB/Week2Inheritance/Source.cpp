#include "point.cpp"
#include <iostream>

int main()
{
	point q;

	q.set_first(3.0);
	q.set_second(4.0);

	point3d r;

	r.set_first(5.0);
	r.set_second(6.0);
	r.set_z(7.0);

	std::cout << q.get_first() << ", " << q.get_second() << std::endl;
	std::cout << q.length() << std::endl;

	std::cout << r.get_first() << ", " << r.get_second() << ", " << r.get_z() << std::endl;
	std::cout << r.length() << std::endl;

	return 0;
}
