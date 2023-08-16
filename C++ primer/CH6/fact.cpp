#include <iostream>

using namespace std;

int fact(int n);

int main(){
    cout << "factorial of 6 is " << fact(6) << endl;
    
    return 0;
}

int fact(int n){
    int f = 1;
    while (n > 1){
        f *= n;
        n -= 1;
    }
    return f;
}