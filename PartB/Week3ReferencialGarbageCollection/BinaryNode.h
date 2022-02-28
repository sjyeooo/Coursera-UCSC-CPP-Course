#ifndef _BINARY_NODE_H
#define _BINARY_NODE_H

#include <ostream>
#include "Node.h"
#include "Tree.h"


class BinaryNode :
    public Node
{
public: 
    int eval();

private:
    friend class Tree;

    char op;
    Tree left;
    Tree right;

    BinaryNode(const char a, Tree b, Tree c) :
        op(a),
        left(b),
        right(c)
    {}

    void print(std::ostream& o) { o << "(" << left << op << right << ")"; }
};

#endif //_BINARY_NODE_H