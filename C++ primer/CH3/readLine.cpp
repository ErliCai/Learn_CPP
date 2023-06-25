#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    int i = 1;
    while (getline(cin, s)){
        cout << i << "th line is " << s << endl;
        i++;
    }

    return 0;
}