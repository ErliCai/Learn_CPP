#include <vector>
#include <map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        
        for (int i=0; i<nums.size(); i++){
            if (m.find(target - nums.at(i)) != m.end()){
                return {i, m.at(target - nums.at(i))};
            }
            m.emplace(nums.at(i), i);
        }
        return {-1, -1};
    }
};

int main(){
    Solution S;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> rst = S.twoSum(nums, target);

    for (int i: rst){
        cout << i << endl;
    }
}