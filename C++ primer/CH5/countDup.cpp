#include <iostream>

using namespace std;

int main(){
    string s = "", prev = "", maxWord = "";

    int count = 0;
    int maxCount = 0;
    while (cin >> s){
        if (s == prev){
            count++;
        }
        else{
            maxWord = (maxCount>=count)? maxWord : prev;
            maxCount = (maxCount>=count)? maxCount : count;
            prev = s;
            count = 1;
        }
    }

    maxWord = (maxCount>=count)? maxWord : prev;
    maxCount = (maxCount>=count)? maxCount : count;

    cout << maxWord << " occurs " << maxCount << " times." << endl;

    return 0;
}