#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) {
            return {-1, -1};
        }

        int left = 0;
        int right = nums.size() - 1;

        // Tìm vị trí đầu tiên
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        // Kiểm tra target có tồn tại hay không
        if (nums[left] != target) {
            return {-1, -1};
        }

        int start = left;

        // Tìm vị trí cuối cùng
        left = 0;
        right = nums.size() - 1;

        while (left < right) {
            // Làm tròn mid sang bên phải
            int mid = left + (right - left + 1) / 2;

            if (nums[mid] <= target) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }

        int end = left;

        return {start, end};
    }
};