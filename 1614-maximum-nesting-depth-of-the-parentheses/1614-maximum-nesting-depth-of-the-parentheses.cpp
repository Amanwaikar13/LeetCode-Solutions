class Solution {
public:
    int maxDepth(string s) {

        int m = 0;
        int n = 0;
        
        for(int i =0; i< s.length(); i++){
            if(s[i] == '('){
                m++;
            }
            if(s[i] == ')'){
                m--;
            }

            if( m >= n){
                n=m;
            }
        }
    return n;
    }
};