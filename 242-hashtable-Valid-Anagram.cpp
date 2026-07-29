#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        if(s.size() != t.size())
            return false;
        for(char letter:s){
            freq[letter]++;
        }
        for(char letter:t){
            freq[letter]--;
        }
        for(auto pair:freq){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};

// class Solution
// {
// public:
//     bool isAnagram(string s, string t)
//     {
//         if (s.size() != t.size())
//         {
//             return false;
//         }

//         unordered_map<char, int> freqS;
//         unordered_map<char, int> freqT;

//         for (char letter : s)
//         {
//             freqS[letter]++;
//         }

//         for (char letter : t)
//         {
//             freqT[letter]++;
//         }

//         return freqS == freqT;
//     }
// };

