#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

bool isOperator(const std::string &token);
int performOperation(int a, int b, const std::string &op);
int evaluateRPN(const std::string &expression);

#endif
