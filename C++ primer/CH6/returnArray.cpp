#include <iostream>

using namespace std;

int odd[] = {1,2,3};

auto arr1() -> int(*) [3]{
    return &odd;
}

// auto arr2(int i) -> (int*) [3]{
//     int ia[3] = {i,i,i};
// }

decltype(odd) &arrRef(){
    return odd;
}

int main(){
    
    int (*ia)[3] = arr1();
    
    // cout << (*ia)[0] << endl;
    // cout << (*ia)[1] << endl;
    // cout << (*ia)[2] << endl;
    
    int (&ia2)[3] = arrRef();
    cout << ia2[0] << endl;
    
    return 0;
}