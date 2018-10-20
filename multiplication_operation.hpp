//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_MULTIPLICATION_OPERATION_HPP
#define CPP_LAB5_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation {
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation():abstract_operation(MULTIPLICATION_CODE){};
    int perform(int i1, int i2) override {return i1 * i2;};
    virtual ~multiplication_operation() {};
};
#endif //CPP_LAB5_MULTIPLICATION_OPERATION_HPP
