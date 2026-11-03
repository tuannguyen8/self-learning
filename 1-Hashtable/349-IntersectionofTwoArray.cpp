#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set <int> a;
        for(int num: nums1){
            a.insert(num);
        }
        for(int num: nums2){
            if(a.find(num)!=a.end()){
                result.insert(num);
            }
        }
        vector<int> st(result.begin(), result.end());
        return st;
    }
};

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set <int> set1 (nums1.begin(), nums1.end());
//         unordered_set <int> set2 (nums2.begin(), nums2.end());
//         vector <int> result;
//         for(int num:set1){
//             auto check = set2.find(num);
//             if(check != set2.end()){
//                 result.push_back(num);
//             }
//         }
//         return result;
//     }
// };