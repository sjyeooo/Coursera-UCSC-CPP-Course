#ifndef _UNARY_NODE_H
#define _UNARY_NODE_H

#include <ostream>
#include "Node.h"
#include "Tree.h"

class UnaryNode :
	public Node
{
public:
	int eval();

private:
	friend class Tree;
	char op;
	Tree opnd;
	UnaryNode(const char a, Tree b) :
		op(a),
		opnd(b) { }

	void print(std::ostream& o) { o << "(" << opnd << ")"; }
};

#endif //_UNARY_NODE_H