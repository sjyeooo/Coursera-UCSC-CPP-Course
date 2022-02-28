#ifndef _ID_NODE_H
#define _ID_NODE_H

#include <ostream>
#include "LeafNode.h"


class IdNode :
    public LeafNode
{
public:
    int eval() { return valtab[name]; }

private:
    friend class Tree;
    char name;
    void print(std::ostream& o) { o << name; }

    IdNode(const char id) :
        name(id) {}
};

#endif