#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// bool containsDuplicate(vector<int>& nums)
// {
//     unordered_map<int, int> freq;

//     for (int num : nums)
//     {
//         freq[num]++;

//         if (freq[num] > 1)
//         {
//             return true;
//         }
//     }

//     return false;
// }


bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(int i = 0; i < nums.size(); i++){
        int num = nums[i];
        if(freq.find(num) != freq.end()){
            return true;
        }else{
            freq[num];
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1,2,3,1};

    if (containsDuplicate(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}