class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(), citations.end(), greater<int>());


        int paper = 0;
        
        for(int i=0; i < citations.size(); i++){

            if(citations[i] >= i + 1){
                paper = i + 1;
            }else{
                break;
            }
        }
        return paper;
    }
};