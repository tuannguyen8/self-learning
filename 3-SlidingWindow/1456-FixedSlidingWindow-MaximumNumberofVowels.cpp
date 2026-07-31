#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }else{
            return false;
        }
    }
    int maxVowels(string s, int k) {
        int vowelCount = 0;
        for(int i = 0; i<k; i++){
            if(isVowel(s[i])){
                vowelCount++;
            }
        }
        int maxCount = vowelCount;
        for(int i = k; i<s.size(); i++){
            if(isVowel(s[i])){
                vowelCount++;
            }
            if(isVowel(s[i-k])){
                vowelCount--;
            }
            maxCount = max(maxCount, vowelCount);
        }
        return maxCount;
    }
};