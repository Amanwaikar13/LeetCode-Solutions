class Solution {
public:
    int maxDepth(string s) {

        int count = 0;
        int maxcount = 0;
        for(char ch : s){
            if(ch == '('){
                count ++;
                if(maxcount < count){
                    maxcount = count;
                }
            }else if(ch ==')'){
                count--;
            }
        }
        return maxcount;
    }
};