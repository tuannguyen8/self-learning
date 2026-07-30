#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int result = 0;
        while (i<j){
            int area = min(height[i], height[j]) * (j-i);
            result = max(area, result);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
        }
        }
        return result;
    }
};