#include <iostream>

int main(){

    int i = 0;
    int *p;
    int *&r = p;
    r = &i;
    *r = 100;

    std::cout << i << std::endl;
}