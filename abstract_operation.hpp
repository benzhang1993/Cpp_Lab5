//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_ABSTRACT_OPERATION_HPP
#define CPP_LAB5_ABSTRACT_OPERATION_HPP

#include "operation.hpp"

/**
 * An operation with a operation type
 */
class abstract_operation : public operation{
    char operation_type;

public:
    abstract_operation(char oper) {
        operation_type = oper;
    }
    char get_code() {
        return operation_type;
    }
    virtual ~abstract_operation(){};
};
#endif //CPP_LAB5_ABSTRACT_OPERATION_HPP
