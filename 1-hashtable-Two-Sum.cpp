#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> value_index;
        for(int i = 0; i <nums.size(); i++){
            int current = nums[i];
            int look_for = target-current;
            auto it = value_index.find(look_for);
            if(it != value_index.end()){
                return {i, it->second};
            }
            value_index[current] = i;
        }
        return {};
    }
};