#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++) {
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {}; // Return an empty vector if no solution is found
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         for(int i = 0; i < nums.size(); i++) {
//             target -= nums[i];
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {}; // Return an empty vector if no solution is found
//     }
// };

class Solution{
    public:
    
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> numMap;
        
        for(int i=0; i < nums.size();i++){
            int value = target - nums[i];
            if(numMap.find(value) != numMap.end()){
                return {numMap[value], i};
            }
            numMap[nums[i]] = i;
        }
        return{};
    }
};