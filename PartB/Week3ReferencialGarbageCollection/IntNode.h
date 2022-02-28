#ifndef _INT_NODE_H
#define _INT_NODE_H

#include "LeafNode.h"

class IntNode :
    public LeafNode
{
public: 
    int eval() { return n; }

private:
    friend class Tree;
    int n;

    void print(std::ostream& o) { o << n; }

    IntNode(int k) :n(k) {} //Constructor (intiialiser)
};

#endif