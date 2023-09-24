#include "LengthOfLongestSubstring.hpp"
#include <iostream>

using namespace std;

LengthOfLongestSubstring S;

void testCase1(){
    string s = "abcabcbb";
    int ans = S.lengthOfLongestSubstring(s);
    int expected = 3;
    
    if(ans == expected){
        cout << "test 1 pass" << endl;
    }
}

void testCase2(){
    string s = "bbbbb";
    int ans = S.lengthOfLongestSubstring(s);
    int expected = 1;
    
    if(ans == expected){
        cout << "test 2 pass" << endl;
    }
}

void testCase3(){
    string s = "pwwkew";
    int ans = S.lengthOfLongestSubstring(s);
    int expected = 3;
    
    if(ans == expected){
        cout << "test 3 pass" << endl;
    }
}

void testCase4(){
    string s = "tmmzuxt";
    int ans = S.lengthOfLongestSubstring(s);
    int expected = 5;
    
    if(ans == expected){
        cout << "test 4 pass" << endl;
    }
}


int main(){
    testCase1();
    testCase2();
    testCase3();
    testCase4();
    
    return 0;
}