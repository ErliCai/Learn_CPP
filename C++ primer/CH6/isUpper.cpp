#include <iostream>
#include <cctype>

using namespace std;

bool is_all_upper(const string &s){
    for (auto c: s){
        if (!isupper(c)){
            return false;
        }
    }
    return true;
}

int main(){
    
    string s1 = "ABCd";
    cout << is_all_upper(s1) << endl;
    
    string s2 = "ABCD";
    cout << is_all_upper(s2) << endl;    
    
    return 0;
}