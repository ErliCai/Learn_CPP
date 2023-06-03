#include <iostream>

using namespace std;

int main(){
    typedef double wage;
    typedef wage money, *wagepointer;

    money salary = 1;
    wagepointer herSalary = &salary;

    cout << salary << " " << herSalary << " " << *herSalary << endl;
}