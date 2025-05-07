#include "RPN.hpp"

bool isOperator(const std::string &token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int performOperation(int a, int b, const std::string &op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0) {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        return a / b;
    }
    return 0;
}

int evaluateRPN(const std::string &expression) {
    std::stack<int> stack;
    std::istringstream input(expression);
    std::string token;
    
    while (input >> token) {
        if (token.length() == 1 && isdigit(token[0])) {
            stack.push(token[0] - '0');
        } else if (isOperator(token)) {
            if (stack.size() < 2) {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            stack.push(performOperation(a, b, token));
        } else {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
    
    if (stack.size() != 1) {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    
    return stack.top();
}

