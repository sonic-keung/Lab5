#include "abstract_operation.hpp"
#pragma once
#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : public abstract_operation {
public:
    static constexpr char OPERATION_CODE = '+';

    addition_operation() : abstract_operation(OPERATION_CODE) {};

    virtual ~addition_operation() {};

    int perform(int a, int b) {return a + b; };

};

#endif //LAB5_ADDITION_OPERATION_HPP
