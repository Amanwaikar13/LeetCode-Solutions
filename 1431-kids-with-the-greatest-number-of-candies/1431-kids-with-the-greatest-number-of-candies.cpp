class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max = 0;
        for(int i = 0; i < candies.size();i++){
            if( candies[i] > max){
                max = candies[i];
            }
        }

        vector<bool> result(candies.size());

        for(int i=0;i<candies.size();i++){
            result[i] = (candies[i]+extraCandies >= max );
        }
        return result;
    }
};