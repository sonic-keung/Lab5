//
// Created by Sonic on 2018-10-17.
//
#include "abstract_operation.hpp"
#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP
class addition_operation : public abstract_operation {
public:
    static constexpr char OPERATION_CODE = '+';

    addition_operation() : abstract_operation(OPERATION_CODE) {};

    ~addition_operation() {};

    int perform(int a, int b) {return a + b; };

};

#endif //LAB5_ADDITION_OPERATION_HPP
