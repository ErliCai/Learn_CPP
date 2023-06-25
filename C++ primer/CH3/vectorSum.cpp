#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int i;
    while (cin >> i){
        v.push_back(i);
    }

    vector<int>::iterator it1 = v.begin();
    auto it2 = v.end();

    while (it2 - it1 > 1){
        cout << *it1 + *(++it1) << " " ;
    }

    cout << endl;

    return 0;
}