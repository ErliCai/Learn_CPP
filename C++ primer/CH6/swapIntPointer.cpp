#include <iostream>

using namespace std;

void swapPointer(int *&i1, int *&i2){
    int * i3 = i1;
    i1 = i2;
    i2 = i3;
}

int main(){
    int i1 = 1;
    int i2 = 2;
    int *ip1 = &i1, *ip2 = &i2;
    
    swapPointer(ip1, ip2);
    cout << "i1,i2,p1,p2=" << i1 << "," << i2 << "," << *ip1 << "," << *ip2 << endl;
    
    return 0; 
}