#include <stack>
#include <string>
#include <sstream>
#include <iostream>

#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include "operation.hpp"

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP
class rpn_calculator  {
private:
    int result;
    std::stack<int> stack;
    operation* operation_type(char operations) {

        operation* pointer;

        switch (operations) {
            case '+':
                pointer = new addition_operation();
                break;
            case '-':
                pointer = new subtraction_operation();
                break;
            case '*':
                pointer = new multiplication_operation();
                break;
            case '/':
                pointer = new division_operation();
                break;
            default:
                break;
        }
        return pointer;
    }

    void perform(operation* operations) {
        stack.pop();
        
    }

};

#endif //LAB5_RPN_CALCULATOR_HPP
