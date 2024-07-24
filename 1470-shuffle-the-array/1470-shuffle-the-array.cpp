class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>newArr;

        int left =0;
        int right = n;
        for(int i = 0; i < n; i++){
            
            newArr.push_back(nums[left]);
            newArr.push_back(nums[right]);
            left++;
            right++;
        }
        return newArr;
    }
};