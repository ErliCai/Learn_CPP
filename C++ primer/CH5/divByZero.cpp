#include <iostream>

using namespace std;

int main(){

    int i,j;

    cin >> i >> j;

    while (true){
        try {
            if (j == 0){
                throw invalid_argument("divident cannot be zero");
            }

            cout << i/j << endl;
            break;
        }
        catch (invalid_argument e){
            cout << e.what() << endl;

            cout << "please provide a new divident:";

            cin >> j;
        }
    }

    return 0;

}