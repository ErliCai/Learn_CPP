#include <iostream>

using namespace std;

int progress(){
    static int i = 0;
    return i++;
}

int main(){
    for (int i=0;i<4;i++){
        cout << "the nth call returns " << progress() << endl;
    }
    return 0;
}