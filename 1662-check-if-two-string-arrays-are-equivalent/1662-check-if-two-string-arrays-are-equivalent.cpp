class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s, t;
        
        for(string ch : word2){
            s += ch;
        }

        for(string ct : word1){
             t += ct;
        }
        return s == t;
    }
};