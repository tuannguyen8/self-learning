#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char, int> freq;
        int left = 0;
        int longest = 0;
        int maxFreq = 0;

        for(int right = 0; right < s.size(); right++){

            freq[s[right]]++;
            maxFreq = max(maxFreq, freq[s[right]]);
            while( (right-left+1)-maxFreq>k){
                freq[s[left]]--;
                left++;
            }
            longest = max(longest, right-left+1);
        }

        return longest;
    }
};