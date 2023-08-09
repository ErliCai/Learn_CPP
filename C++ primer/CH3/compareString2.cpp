#include <string>
#include <iostream>

using namespace std;

int main(){
    string s1 = "hello1";
    string s2 = "hello2";

    if (s1 < s2){
        cout << "<" << endl;
    }
    else if (s1 == s2){
        cout << "=" << endl;
    }
    else{
        cout << ">" << endl;
    }

    char c1[] = "hello1";
    char c2[] = "hello2";

    if (strcmp(c1,c2) > 0){
        cout << ">" << endl;
    }
    else if (strcmp(c1,c2) == 0){
        cout << "=" << endl;
    }
    else{
        cout << "<" << endl;
    }


    return 0;
}