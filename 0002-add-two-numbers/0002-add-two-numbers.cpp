
class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummyHead= new ListNode(0);
        ListNode* tail = dummyHead;
        int carry=0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
    int digit1;
    if (l1 != nullptr) {
        digit1 = l1->val;
    } else {
        digit1 = 0;
    }

    int digit2;
    if (l2 != nullptr) {
        digit2 = l2->val;
    } else {
        digit2 = 0;
    }

    int sum = digit1 + digit2 + carry;
    int digit = sum % 10;
    carry = sum / 10;

    ListNode* newNode = new ListNode(digit);
    tail->next = newNode;
    tail = tail->next;

    if (l1 != nullptr) {
        l1 = l1->next;
    } else {
        l1 = nullptr;
    }

    if (l2 != nullptr) {
        l2 = l2->next;
    } else {
        l2 = nullptr;
    }
}

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};