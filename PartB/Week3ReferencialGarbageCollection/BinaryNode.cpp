#include "BinaryNode.h"

#include <iostream>

int BinaryNode::eval()
{
	switch (op) {
	case '-':return (left.eval() - right.eval());
	case '+':return (left.eval() + right.eval());
	case '*':return (left.eval() * right.eval());
	case '/':return (left.eval() / right.eval());
	default: std::cerr << "no operand" << std::endl;
		return 0;
	}
}
