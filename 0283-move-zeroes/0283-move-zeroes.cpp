class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[s++] = nums[i];
            }
        }

        for (int i = s; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};