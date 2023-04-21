#include <iostream>
using namespace std;
int main(){
    int sum = 0, value = 0;

    // read until end-of-file, calculating a running total of all values read
    while (cin >> value)
        sum += value; // equivalent to sum = sum + value

    cout << "Sum is: " << sum << endl;
}