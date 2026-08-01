#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while(left< right){
            int mid = left+(right-left)/2;

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target ){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        //Note: at the end of binary search,left is always the first index 
        // that is greater(or equal )to the target, and right is always the 
        // last index that is smaller than target.
        return left;
    }
};