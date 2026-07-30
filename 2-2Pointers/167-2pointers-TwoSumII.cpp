#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int sum = 0;
        vector <int> result;

        while(left < right){
            sum = numbers[left] + numbers[right];
            if(sum == target){
                result.push_back(left+1);
                result.push_back(right+1);
                return result;
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return result;
    }
};