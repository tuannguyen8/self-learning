#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer = 0;
        int t_pointer = 0;
        while(s_pointer < s.size() && t_pointer < t.size()){
            if(s[s_pointer] == t[t_pointer]){
                s_pointer++;
                t_pointer++;
            }else{
                t_pointer++;
            }
        }
        return s_pointer == s.size();
        
    }
};