class Solution {
public:
    bool isBadPair(char a, char b) { 
        return abs(a - b) == 32; 
    }

    string makeGood(string s) {
        stack<char> st;
        for (char ch : s) {
            if (!st.empty() && isBadPair(ch, st.top())) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        string ans;
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};