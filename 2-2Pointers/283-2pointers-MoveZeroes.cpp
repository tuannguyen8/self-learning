#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(j < nums.size()){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;               
            }
            j++;
        }
    }
};