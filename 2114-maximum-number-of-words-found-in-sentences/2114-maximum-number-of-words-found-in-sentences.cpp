class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxWords = 0;

        for (const string& sentence : sentences) {
            int wordcount = 1;
            for (char ch : sentence) {
                if (ch == ' ') {
                    wordcount++;
                }
            }
            if (wordcount > maxWords) {
                maxWords = wordcount;
            }
        }
        return maxWords;
    }
};