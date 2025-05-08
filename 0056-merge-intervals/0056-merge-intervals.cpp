class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        if (intervals.empty()) return result;

        // Step 1: Sort intervals by starting time
        sort(intervals.begin(), intervals.end());

        // Step 2: Start with the first interval
        result.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            // Get last added interval
            vector<int>& last = result.back();

            // If current interval overlaps with the last, merge them
            if (intervals[i][0] <= last[1]) {
                last[1] = max(last[1], intervals[i][1]);
            } else {
                // Otherwise, just add the interval
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};
