class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closenum = nums[0]+nums[1]+nums[2];

        for(int i=0; i< nums.size()-3; i++){
            for(int j=i+1; j<nums.size()-2; j++){
                for(int k=j+1; k<nums.size()-1;k++){
                    if(abs(nums[i]+nums[k]+nums[j] - target) >= abs(closenum)){
                        closenum = nums[i]+nums[k]+nums[j];
                    }
                }
            }
        }
    return closenum;

    }
};