//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_ADDITION_OPERATION_HPP
#define CPP_LAB5_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {
public:
    static const char ADDITION_CODE = '+';
    addition_operation():abstract_operation(ADDITION_CODE){};
    int perform(int i1, int i2) override {return i1 + i2;};
    virtual ~addition_operation() {};
};
#endif //CPP_LAB5_ADDITION_OPERATION_HPP
