#include <iostream>

int main(){
    int i1 = 10;
    int i2 = 42;
    unsigned u1 = 10;
    unsigned u2 = 42;

    std::cout << i1 - u2 << std::endl;
    std::cout << u1 - i2 << std::endl;

}