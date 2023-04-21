#include <iostream>

// print out sum from 50 to 100
using namespace std;

int main(){
    int sum = 0;
    int i = 50;

    while (i <= 100){
        sum += 50;
        ++i;
    }

    cout << "Sum from 50 to 100 is " << sum << endl;
}