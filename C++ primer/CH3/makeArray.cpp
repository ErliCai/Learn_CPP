#include <iostream>

using namespace std;
int main(){
    int ia[10];
    for (int i=0; i<10; i++){
        ia[i] = i+1;
    }

    auto b = begin(ia);
    auto e = end(ia);
    while (b != e){
        *b = 0;
        b++;
    }

    cout << "hello world" << endl;

    return 0;
}