#include "TwoSum.hpp"

#include <map>
#include <iostream>

using namespace std;


vector<int> TwoSum::twoSum(vector<int>& nums, int target) {
    
    int pos = 0;
    map<int, int> m;
    
    for (int i: nums){
        if (m.find(target-i) != m.end()){
            return {m.at(target-i), pos};
        }
        else{
            m.emplace(i, pos);
            pos += 1;
        }
    }
    
    return {};
}



