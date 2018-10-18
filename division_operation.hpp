#include "abstract_operation.hpp"
#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP
class division_operation : public abstract_operation {
public:
    static constexpr char OPERATION_CODE = '/';

    division_operation(): abstract_operation(OPERATION_CODE) {};

    ~division_operation() {};

    int perform(int a, int b) {return a / b;};

};
#endif //LAB5_DIVISION_OPERATION_HPP
