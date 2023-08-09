#include <iostream>

using namespace std;

int main(){
    char grades[] = {'F', 'E', 'D', 'C', 'B', 'A'}; 

    int score = 0;
    cin >> score;

    if (score < 60){
        cout << grades[0];
    }
    else{
        cout << grades[(score-60)/10 + 1];
    }

    return 0;
}