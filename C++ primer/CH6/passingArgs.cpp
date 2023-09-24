#include <iostream>

using namespace std;

void passByValue(int i){
    i = 0;
}

void passByPointer(int *i){
    *i = 0;
}

void passByReference(int &i){
    i = 100;
}



int main(){
    int i = 100;
    
    passByValue(i);
    cout << "i = " << i << endl;
    
    passByPointer(&i);
    cout << "i = " << i << endl;
    
    passByReference(i);
    cout << "i = " << i << endl;
    
    return 0;
}