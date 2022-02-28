#include "Tree.h"

#include "IntNode.h"
#include "IdNode.h"
#include "UnaryNode.h"
#include "BinaryNode.h"

Tree::Tree(int n)
{
	p = new IntNode(n);
}

Tree::Tree(const char id)
{
	p = new IdNode(id);
}

Tree::Tree(const char op, Tree t)
{
	p = new UnaryNode(op, t);
}

Tree::Tree(const char op, Tree left, Tree right)
{
	p = new BinaryNode(op, left, right);
}

void Tree::operator=(const Tree& t)
{
	++t.p->use;
	if (--p->use == 0)
		delete p;
	p = t.p;
}