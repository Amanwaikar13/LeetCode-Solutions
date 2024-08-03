#include <vector>
#include <unordered_set>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::unordered_set<int> set;

        for (int num : arr) {
            if (set.count(2 * num) || (num % 2 == 0 && set.count(num / 2))) {
                return true;
            }
            set.insert(num);
        }
        
        return false;
    }
};
