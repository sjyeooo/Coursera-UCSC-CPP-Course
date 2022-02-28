#include "UnaryNode.h"
#include <iostream>


int UnaryNode::eval()
{
    switch (op) {
    case '-': 
        return (-opnd.eval());
    case '+': 
        return (+opnd.eval());
    default: 
        std::cerr << "no operand" << std::endl;
        return 0;
    }
}
