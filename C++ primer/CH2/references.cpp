#include <iostream>

int main{
    // test usecase of reference
    int ival = 1024;
    int &refVal = ival;
    // int &refVal2; // error: a reference must be initialized
    // int &refVal3 = 10; // error: a reference cannot be bound to a literal
    // int &refVal4 = refVal + 1; // error: a reference cannot be bound to an expression
    std::cout << refVal << std::endl;

    int i = 0, &r1 = i; double d = 0, &r2 = d;
    r2 = 3.14159;
    std::cout << r2 << std::endl;
    r2 = r1;
    std::cout << r2 << std::endl
    i = r2;
    std::cout << i << std::endl;
    r1 = d;
    std::cout << r1 << std::endl;
}