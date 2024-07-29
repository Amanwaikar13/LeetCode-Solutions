class Solution {
public:
    string reversePrefix(string word, char ch) {

        int r = word.find(ch);
        
        if ( r == string::npos) {
            return word;
        }

        int l = 0;

        while(l < r){
            swap(word[l], word[r]);
            l++;
            r--;
        }
        return word;
    }
};