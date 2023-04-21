#include <iostream>
using namespace std;


int main(){
    // sum of two numbers
    
    // prompt user to enter two numbers
    cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0; // variables to hold the input we read
    cin >> v1 >> v2; // read input

    cout << "The sum of " << v1 << " and " << v2
         << " is " << v1 + v2 << endl;
}