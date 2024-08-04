class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char>st;

        for(char x : s){
            
            if(x == '('){
                if(!st.empty()){
                    ans.push_back(x);
                }
                st.push(x);
            }else{
                st.pop();
                if(!st.empty()){
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};