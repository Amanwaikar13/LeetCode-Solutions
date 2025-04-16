class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
          int total = 0;
        int n = timeSeries.size();
        
        for (int i = 0; i < n - 1; i++) {
            if (timeSeries[i] + duration <= timeSeries[i + 1]) {
                total += duration;
            } else {
                total += timeSeries[i + 1] - timeSeries[i];
            }
        }

        total += duration;

        return total;
    }
};