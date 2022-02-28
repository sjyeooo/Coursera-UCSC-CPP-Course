#include "Node.h"
#include "Tree.h"

#include <iostream>

int main()
{
	valtab['A'] = 3;
	valtab['B'] = 4;
	std::cout << "A = 3, B=4" << std::endl;

	Tree t1 = Tree('*', Tree('-', 5), Tree('+', 'A', 4));
	Tree t2 = Tree('+', Tree('-', 'A',1), Tree('+', t1, 'B'));

	//Prints paranthesised version
	std::cout << "t1 = " << t1 << "; t2 = " << t2 << std::endl;
	std::cout << "t1:" << t1.eval() << "t2:" << t2.eval() << std::endl;

}