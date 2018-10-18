//
// Created by Sonic on 2018-10-17.
//
#include "operation.hpp"
#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP
class abstract_operation : public operation {
private:
    char operation_type;

public:

    abstract_operation(char) : operation_type {} {};

    virtual char get_code() {
        return operation_type;
    };


    virtual inline ~abstract_operation() {};
};

#endif //LAB5_ABSTRACT_OPERATION_HPP
