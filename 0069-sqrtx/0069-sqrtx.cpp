class Solution {
public:
    int mySqrt(int x) {

        int value = sqrt(x);
        int result = round(value);
        return result;
    }
};