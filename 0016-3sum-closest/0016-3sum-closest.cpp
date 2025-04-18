class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closenum = nums[0] + nums[1] + nums[2];
        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {           //Aproch 1  time complexity: 0(n^3) 
            for(int j = i + 1; j < n - 1; j++) {
                for(int k = j + 1; k < n; k++) {
                    int currSum = nums[i] + nums[j] + nums[k];
                    if(abs(currSum - target) < abs(closenum - target)) {
                        closenum = currSum;
                    }
                }
            }
        }
        return closenum;
    }
};
