#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> num_map;
        for(int i = 0; i < nums.size(); i++){
            auto it = num_map.find(nums[i]);
            if(it != num_map.end()){
                int abs_value;
                abs_value = i - it->second;
                if(abs_value <= k){
                    return true;
                }else{
                    num_map[nums[i]] = i;
                }
            }else{
                num_map[nums[i]] = i;
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int, int> map;
//         for(int i = 0; i < nums.size(); i++){
//             if(map.find(nums[i]) != map.end() && i - map[nums[i]] <= k){
//                 return true;
//             }
//             map[nums[i]] = i;
//         }
//         return false;
//     }
// };