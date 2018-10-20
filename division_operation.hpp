//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_DIVISION_OPERATION_HPP
#define CPP_LAB5_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"

class division_operation : public abstract_operation {
public:
    static const char DIVISION_CODE = '/';
    division_operation():abstract_operation(DIVISION_CODE){};
    int perform(int i1, int i2) override {return i1 / i2;};
    virtual ~division_operation() {};
};
#endif //CPP_LAB5_DIVISION_OPERATION_HPP
