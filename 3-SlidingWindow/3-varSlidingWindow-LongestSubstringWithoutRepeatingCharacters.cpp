#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int left = 0;
        unordered_set<char> window;
        for(int right = 0; right < s.size(); right++){
            while(window.find(s[right]) != window.end()){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            longest = max(longest, right-left+1);
        }
        return longest;
    }
};
