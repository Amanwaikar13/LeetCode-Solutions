class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>st;

        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i =0;i < nums.size();i++){
            if(nums[i] != i){
                return i;
            }
        }
        return n;
    }
};