#include "abstract_operation.hpp"
#pragma once
#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP
class subtraction_operation : public abstract_operation {
public:
    static constexpr char OPERATION_CODE = '-';

    subtraction_operation() : abstract_operation(OPERATION_CODE) {};

    virtual ~subtraction_operation() {};

    int perform(int a, int b) {return a - b;};

};

#endif //LAB5_SUBTRACTION_OPERATION_HPP
