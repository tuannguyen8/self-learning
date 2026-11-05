#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        //using 2 pointers
        //first, need to sort array
        //left = 0, right = people.size()-1
        //result = 0 is the number of boats
        //while(left<right),start with right, 
            //if people[right]== limit -> result++ and right--
            //if people[right]<limit 
                //if people[right]+people[left] <= limit -> result++ and right-- left++
                //else result++, right--
        int left = 0; 
        int right = people.size() - 1;
        int result = 0;
        sort(people.begin(), people.end());
        while(left<=right){
            if(people[right]==limit){
                result++;
                right--;
            }
            else if(people[right] < limit && people[right]+people[left]<= limit){
                result++;
                right--;
                left++;
            }else{
                result++;
                right--;
            }
        }
        return result;
    }
};

// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         // Sort the array first
//         sort(people.begin(), people.end());
        
//         int left = 0; 
//         int right = people.size() - 1;
//         int result = 0;
        
//         while (left <= right) {
//             // If the heaviest and lightest person can fit together
//             if (people[right] + people[left] <= limit) {
//                 left++;  // Lightest person gets on the boat
//             }
            
//             // The heaviest person ALWAYS gets a boat in this turn
//             right--; 
//             result++; // One boat used
//         }
        
//         return result;
//     }
// };