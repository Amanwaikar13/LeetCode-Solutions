/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>result;
        ListNode* slow = head;
        ListNode* fast = head;
        
        if (!head || !head->next) {
            return true;  // A single node or empty list is always a palindrome
        }

        while(fast && fast->next){
            result.push(slow->val);
            fast = fast->next->next;
            slow = slow->next;
        }

        if (fast) {
            slow = slow->next;
        }

        while(slow != nullptr){
            int value1 = slow->val;
            int value2 = result.top();

            if(value2 != value1){
                return false;
            }else{
                result.pop();
                slow=slow->next;
            }
        }
        return result.empty();
    }
};