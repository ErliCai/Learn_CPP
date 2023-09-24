#include "TwoSum.hpp"
#include <iostream>

using namespace std;

TwoSum s;

void testCase1(){
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> ans = s.twoSum(nums, target);
    vector<int> expected{0, 1};
    
    if(ans == expected){
        cout << "test 1 pass" << endl;
    }
}

void testCase2(){
    vector<int> nums{3,2,4};
    int target = 6;
    vector<int> ans = s.twoSum(nums, target);
    vector<int> expected{1, 2};
    
    if(ans == expected){
        cout << "test 2 pass" << endl;
    }
}

void testCase3(){
    vector<int> nums{3,3};
    int target = 6;
    vector<int> ans = s.twoSum(nums, target);
    vector<int> expected{0, 1};
    
    if(ans == expected){
        cout << "test 3 pass" << endl;
    }
}

void testCase4(){
    vector<int> nums{2,4,11,3};
    int target = 6;
    vector<int> ans = s.twoSum(nums, target);
    vector<int> expected{0, 1};
    
    if(ans == expected){
        cout << "test 4 pass" << endl;
    }
}

int main(){
    // testCase1();
    // testCase2();
    // testCase3();
    testCase4();
    
    return 0;
}