//
// Created by benzh on 2018-10-19.
//

#ifndef CPP_LAB5_OPERATION_HPP
#define CPP_LAB5_OPERATION_HPP

/**
 * An operation that is performed on two integers
 */
class operation {

public:
    virtual char get_code() = 0;
    virtual int perform(int i1, int i2) = 0;
    virtual ~operation() {};
};

#endif //CPP_LAB5_OPERATION_HPP
