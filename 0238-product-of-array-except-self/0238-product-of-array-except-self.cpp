class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total_product = 1;
        int total_zero = 0;
        
        for (int num : nums) {
            if (num != 0) {
                total_product *= num;
            } else {
                total_zero++;
            }
        }

        vector<int> result(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            if (total_zero > 1) {
                result[i] = 0;
            } else if (total_zero == 1) {
                result[i] = (nums[i] == 0) ? total_product : 0;
            } else {
                result[i] = total_product / nums[i];
            }
        }

        return result;
    }
};
