#include "abstract_operation.hpp"
#pragma once
#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP
class multiplication_operation : public abstract_operation {
public:
    static constexpr char OPERATION_CODE = '*';

    multiplication_operation() : abstract_operation(OPERATION_CODE) {};

    virtual ~multiplication_operation() {};

    int perform(int a, int b) {return a * b;};

};

#endif //LAB5_MULTIPLICATION_OPERATION_HPP
