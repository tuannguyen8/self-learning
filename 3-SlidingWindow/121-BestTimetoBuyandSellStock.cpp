#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++){
            int currentProfit = prices[i] - minPrice;
            maxProfit = max(maxProfit, prices[i]- minPrice);
            minPrice = min (minPrice, prices[i]);
        }
        return maxProfit;
    }
};