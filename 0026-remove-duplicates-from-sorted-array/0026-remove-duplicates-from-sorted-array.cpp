class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int result = 1;

        for(int i=0; i< nums.size();i++){
            if(nums[i]!=nums[result-1]){
                nums[result]=nums[i];
                result++;
            }
        }
        return result;
    }
};