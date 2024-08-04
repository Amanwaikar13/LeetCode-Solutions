class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->val == temp->next->val) {
                ListNode* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
