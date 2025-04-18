class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxlength=0;
        int n = height.size();
        int left = 0;
        int right = n - 1;
        while(left < right){

           int h = min(height[left], height[right]);
           int w =right - left;
           int area = w * h;

           if(area > maxlength){
            maxlength = area;
           }

           if(height[left] > height[right]){
            right--;
           }else{
            left++;
           }
        }
    return maxlength;
    }
};