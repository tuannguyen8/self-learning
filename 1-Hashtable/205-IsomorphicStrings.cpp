#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            if (sToT.find(a) != sToT.end()) {
                if (sToT[a] != b) {
                    return false;
                }
            } else {
                sToT[a] = b;
            }

            if (tToS.find(b) != tToS.end()) {
                if (tToS[b] != a) {
                    return false;
                }
            } else {
                tToS[b] = a;
            }
        }

        return true;
    }
};

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         //different size() -> false
//         //use unordered_map <char, char>
//         //first get the size of s or t, they must have the same size()
//         //in 1 for loop, create s_current, t_current
//         //check s to t,check if s_current exist in map
//             //if exist, check if its value == t_current
//                 //if not, return false
//         // check t to s, check if t_current exist in map
//             //if exist, check if its value == s_current
//                 //if not, return false
//         //if not exist, add s_current as key and t_current as value to map
//         //return true

//         if(s.size() != t.size()){
//             return false;
//         }
//         int length = s.size();
//         unordered_map <char, char> matching_map;
//         unordered_map <char, char> matching_map_2;
//         for(int i = 0; i < length; i++){
//             char s_curr = s[i];
//             char t_curr = t[i];

//             auto it = matching_map.find(s_curr);
//             if( it != matching_map.end() && it->second != t_curr){
//                 return false;
//             }
//             matching_map[s_curr] = t_curr;

//             auto it_2 = matching_map_2.find(t_curr);
//             if( it_2 != matching_map_2.end() && it_2->second != s_curr){
//                 return false;
//             }
//             matching_map_2[t_curr] = s_curr;
//         }

//         return true;
//     }
// };