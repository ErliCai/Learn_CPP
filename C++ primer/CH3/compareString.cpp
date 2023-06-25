#include <string>
#include <iostream>

using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1 >> s2;

    auto size1 = s1.size();
    auto size2 = s2.size();

    if (size1 > size2){
        cout << "s1 longer than s2" ;
    }
    else if (size1 == size2){
        cout << "s1 and s2 has same length";
    }
    else{
        cout << "s2 longer than s1";
    }

    return 0;
}