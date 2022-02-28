#ifndef _TREE_H_
#define _TREE_H_

#include <ostream>

#include "Node.h"

class Tree
{
public:
	Tree(int);							//Constant
	Tree(const char);					//Variable
	Tree(const char, Tree);				//Unary operator
	Tree(const char, Tree, Tree);		//Binary operator

	//Copy constructor
	Tree(const Tree& t) {
		p = t.p;	//Referential copy
		++p->use;
	};

	~Tree() {
		if (--p->use == 0)
			delete p;
	}
	void operator=(const Tree& t);

	int eval() { 
		return p->eval(); 
	}

private: 
	friend class Node;

	friend std::ostream& operator<<(std::ostream& o, const Tree& t);

	Node* p;	//polymorphic hierachy
	//polymorphic pointer because Node is a abstract pointer
};


std::ostream& operator<<(std::ostream &o, const Tree &t)
{
	t.p->print(o);
	return (o);
}

#endif