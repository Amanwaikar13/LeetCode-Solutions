
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* newNode = &dummy;

        for (int i = 1; i < left; ++i) {
            newNode = newNode->next;
        }

        ListNode* curr = newNode->next;

        for (int i = 0; i < right - left; ++i) {
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = newNode->next;
            newNode->next = temp;
        }

        return dummy.next;
    }
};