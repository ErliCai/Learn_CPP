#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(10,2);
    v.push_back(3);

    for (auto i: v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}