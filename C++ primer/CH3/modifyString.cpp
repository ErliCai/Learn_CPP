#include <string>
#include <iostream>

using namespace std;

int main(){
    string s = "Hello World";
    
    for (decltype(s.size()) i=0; i<s.size(); i++){
        s[i] = 'Y';
    }

    cout << s << endl;
    return 0;
}


    // decltype(s.size()) i=0;
    // while (i < s.size()){
    //     s[i] = 'Y';
    //     i++;
    // }