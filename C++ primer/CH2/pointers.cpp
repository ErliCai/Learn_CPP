#include <iostream>

int main() {
    int ival = 42;
    int *p = &ival;
    std::cout << *p << std::endl;
    *p = 0;
    std::cout << *p << std::endl;
    std::cout << ival << std::endl;
    return 0;
}