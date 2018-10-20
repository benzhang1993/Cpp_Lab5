//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_RPN_CALCULATOR_HPP
#define CPP_LAB5_RPN_CALCULATOR_HPP

#include <stack>
#include "operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include <string>
#include <sstream>
#include <iostream>

/**
 * A RPN calculator that calculates using a stack
 */
class rpn_calculator {
    int result;
    std::stack<int> stack;

    operation* operation_type(int operation) {
        switch(operation) {
            case addition_operation::ADDITION_CODE: return new addition_operation;
            case subtraction_operation::SUBTRACTION_CODE: return new subtraction_operation;
            case multiplication_operation::MULTIPLICATION_CODE: return new multiplication_operation;
            case division_operation::DIVISION_CODE: return new division_operation;
        }
    }

    void perform(operation* op) {
        int i1 = stack.top();
        stack.pop();
        int i2 = stack.top();
        stack.pop();
        int result = op->perform(i1, i2);
        stack.push(result);
    }

public:
    int process_form(std::string formula) {
        std::istringstream iss(formula);
        std::string operand;
        int integer;
        while(iss >> operand) {
            std::istringstream iss2(operand);
            if(iss2 >> integer) {
                stack.push(integer);
            }
            else {
                perform(operation_type(operand[0]));
            }
            iss2.clear();
        }
        iss.clear();
        return stack.top();
    }
};


#endif //CPP_LAB5_RPN_CALCULATOR_HPP
