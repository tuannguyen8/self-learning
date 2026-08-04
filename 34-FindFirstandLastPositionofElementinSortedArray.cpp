#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        // Tìm vị trí đầu tiên có giá trị >= target
        int left = 0;
        int right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        int start = left;

        // Target không tồn tại
        if (start == n || nums[start] != target) {
            return {-1, -1};
        }

        // Tìm vị trí đầu tiên có giá trị > target
        left = 0;
        right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        int end = left - 1;

        return {start, end};
    }
}; 