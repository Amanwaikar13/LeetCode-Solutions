class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> exists;
        for(char s: stones){
            exists[s]++;
        }
        int ans = 0;
        for(char c: jewels){
           if(exists.find(c) != exists.end()){
            ans+= exists[c];
           }
        }
        return ans;
    }
};