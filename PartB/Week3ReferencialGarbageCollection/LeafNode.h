#ifndef _LEAFNODE_H_
#define _LEAFNODE_H_

#include <ostream>
#include "Node.h"

class LeafNode :
	public Node
{
private:
	friend class Tree;
	void print(std::ostream& o) = 0;
	virtual int eval() = 0;
};

#endif