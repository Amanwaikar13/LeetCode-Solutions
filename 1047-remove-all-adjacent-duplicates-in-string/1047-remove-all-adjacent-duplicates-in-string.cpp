class Solution {
public:
    string removeDuplicates(string s) {

        string ans;
        stack<char>st;

        for(auto a : s){
            if(!st.empty() && a == st.top()){
                st.pop();
            }else{
                st.push(a);
                ans.push_back(a);
            }
        }
         string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());

        return result;
        return ans;
    }
};