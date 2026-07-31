#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int first = 0;
        int second = k-1;
        int sum = 0;
        
        for(int i = k-1; i>=0; i--){
            sum = sum + nums[i];
        }
        int maxSum=sum;
        for(int i = k; i < nums.size(); i++){
            sum = sum - nums[i-k] + nums[i];  
            maxSum = max(maxSum, sum);
        } 
        return (double) maxSum/k;
    }
};