#include <iostream>

using namespace std;

int main(){

    char c;
    int count = 0;

    while (cin >> noskipws >> c){

        cout << "c is " << c << "." << endl;
        c = tolower(c);

        if (c == ' '){
            count++;
        }
        if (c == '\t'){
            count++;
        }
        if (c == '\n'){
            count++;
        }
    }

    cout << "number of escape characters is " << count << endl;

    return 0;
}