class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
    set<int> ordered_set;

    int n = nums.size();

    for (int num : nums) {
        ordered_set.insert(num);
    }

    for (int i = 0; i < n; i++) {

        if (ordered_set.find(i) == ordered_set.end()) {
            return i;
        }
    }

    return n;
    }
};