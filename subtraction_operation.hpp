//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_SUBTRACTION_OPERATION_HPP
#define CPP_LAB5_SUBTRACTION_OPERATION_HPP

#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation {
public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation():abstract_operation(SUBTRACTION_CODE){};
    int perform(int i1, int i2) override {return i1 - i2;};
    virtual ~subtraction_operation() {};
};
#endif //CPP_LAB5_SUBTRACTION_OPERATION_HPP
