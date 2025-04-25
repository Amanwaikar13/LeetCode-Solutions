class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int result = 0;
    int count=0;

    for (int i = 0; i< k; i++){
        result += nums[i];
    }    

    int windowsum = result;
    int maxsum = windowsum;
    for(int i = k; i < nums.size(); i++){
        windowsum += nums[i] - nums[i-k];

        maxsum=max(windowsum, maxsum);
    }  

    return (double)maxsum / k;
    }
};
