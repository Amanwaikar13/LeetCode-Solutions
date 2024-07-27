class Solution {
public:
    string defangIPaddr(string address) {
        vector<string>ip;
        string m = ""; 
        for(char ch : address){
            if(ch == '.'){
                m += "[.]";
            }else{
                m+= ch;
            }
        }
        return m;
    }
};