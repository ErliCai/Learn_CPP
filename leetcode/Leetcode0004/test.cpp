#include <iostream>

using namespace std;

bool greaterThan(int i1, int i2){
    return i1 > i2;
}

int compare(int i1, int i2, bool (*f)(int, int)){
    
    return f(i1,i2);
}

int main(){
    cout << compare(1,2, &greaterThan)<< endl;
}