#include <iostream>

using namespace std;

int sum(initializer_list<int> lst){
    int sum = 0;
    for (auto b = lst.begin(), e = lst.end(); b!=e; b++){
        sum += *b;
    }
    return sum;
}

int main(){
   int s = sum({1,2,3,4,5});
   cout << s << endl;
   
   return 0;
}