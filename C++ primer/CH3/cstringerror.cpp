#include <iostream>

using namespace std;

int main(){
    char s[] = {'h','e','l','l','o'};
    char *p = s;
    for (;;p++){
        cout << *p << endl;
    }

    return 0;
}