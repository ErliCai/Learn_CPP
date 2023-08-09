#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char c;
    int count = 0;

    while (cin >> c){
        c = tolower(c);

        if (c == 'a'){
            count++;
        }
        if (c == 'e'){
            count++;
        }
        if (c == 'o'){
            count++;
        }
        if (c == 'i'){
            count++;
        }
        if (c == 'u'){
            count++;
        }
    }

    cout << "number of vowels is " << count << endl;

    return 0;
}