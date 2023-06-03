#include <iostream>

int main(){
    int i1 = 1;
    int i2 = 2;
    int *p = &i1;

    std::cout << *p << std::endl;

    p = &i2;

    std::cout << *p << std::endl;

    *p = 3;

    std::cout << i2 << std::endl;

    return 0;
}