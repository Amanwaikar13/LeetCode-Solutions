class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int right = 2;

         if (nums.size() <= 2) {
            return nums.size();
        }

        for(int i=2;i < nums.size();i++){
            if(nums[i] != nums[right - 2]){
                nums[right]= nums[i];
                right++;
            }
        }
        return right;
    }
};