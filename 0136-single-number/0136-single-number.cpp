class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniqueNumber = 0;
        
        for (int val : nums) {
            uniqueNumber ^= val;
        }
        
        return uniqueNumber; 
    }
};
