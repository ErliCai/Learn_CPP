#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    vector<string> v;
    string s;
    while (cin >> s){
        v.push_back(s);
    }

    for (auto &str: v){
        str[0] = toupper(str[0]);
    }

    for (auto str: v){
        cout << str << endl;
    }

    return 0;
}