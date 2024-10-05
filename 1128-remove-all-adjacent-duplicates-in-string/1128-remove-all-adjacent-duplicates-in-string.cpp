class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        stack<char>tp;
        for(char ch : s){

            if(!tp.empty() && tp.top() == ch){
                tp.pop();
                ans.pop_back();
            }else{
                tp.push(ch);
                ans.push_back(ch);
            }
        }
        return ans;
    }
};