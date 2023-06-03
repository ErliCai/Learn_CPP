#include <iostream>

using namespace std;

int main(){
    int i = 1;
    const int i2=i, &r=i;
    cout << i2 << r << endl;

    return 0;
}