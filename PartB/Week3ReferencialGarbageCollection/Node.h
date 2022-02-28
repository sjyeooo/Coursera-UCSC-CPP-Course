#ifndef _NODE_H_
#define _NODE_H_

#include <ostream>

class Tree;

namespace
{
	int valtab[127]; //used for integer values of variables
}

class Node
{
protected:
	Node() { use = 1; }
	virtual void print(std::ostream&) = 0;
	virtual ~Node() {} //note virtual destructor
	virtual int eval() = 0;	//=0 means pure - they are to be overwritten, there is no meaning here

private:
	friend class Tree;
	friend std::ostream& operator<<(std::ostream&, const Tree&);

	//Keep track of number of instances using this
	int use;	//reference count - garbage collection
};


#endif