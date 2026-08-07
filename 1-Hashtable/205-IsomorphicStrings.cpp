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