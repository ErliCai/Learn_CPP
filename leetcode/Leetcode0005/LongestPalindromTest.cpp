#include "LongestPalindrom.hpp"
#include <iostream>
#include <vector>

using namespace std;

LongestPalindrom S;

void testCase1(){
    vector<int> nums1{1,3};
    vector<int> nums2{2};
    
    double ans = S.findMedianSortedArrays(nums1, nums2);
    double expected = 2.00000;
    if (ans == expected){
        cout <<  "test case 1 pass" << endl;   
    }
}

int main(){
    testCase1();
    // testCase2();
    // testCase3();
    // testCase4();
    // testCase5();
    return 0;
}