class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int minLength = INT_MAX;
        int sum = 0;
        int start = 0;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];

            while (sum >= target) {
                minLength = min(minLength, i - start + 1);
                sum -= nums[start++];
            }
        }

        return (minLength == INT_MAX) ? 0 : minLength;
    }
};