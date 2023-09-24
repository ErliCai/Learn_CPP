#include <iostream>

using namespace std;

void swap(int &i, int &j){
    int k = i;
    i = j;
    j = k;    
}

int main(){
    int i = 1, j = 2;
    
    swap(i,j);
    
    cout << "i=" << i << " ,j=" << j << endl;
    
    return 0;
}