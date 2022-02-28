#include <iostream>


class B {
public:
	virtual void foo(int i) { std::cout << "B::foo(int i)" << std::endl; }
	virtual void foo(double i) { std::cout << "B::foo(double i)" << std::endl; }
protected:

};

class D :
	public B {
public:
	void foo(int) { std::cout << "D::foo(int i)" << std::endl; };

};

int main() {
	D d;
	B b, * pb = &d;

	b.foo(9.5);		//Uses class B::foo(double i)
	d.foo(9.5);		//Uses class D::foo(int i)

	pb->foo(9.5);	//Uses base class B::foo(double i)
	pb->foo(9);		//Uses class D::foo(int i)
}