class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>hashmap;
        for( char ch : s){
            hashmap[ch]++;
        }

        // nums.sort(begin(),end())

        for(int i=0; i < t.size();i++){
            if(hashmap.find(t[i]) != hashmap.end()){
            }else{
                return false;
            }
        }
        return true;
    }
};