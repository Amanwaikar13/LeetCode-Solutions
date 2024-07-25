class Solution {
public:

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==nullptr || head->next==nullptr ||k==0){
            return head;
        }
        ListNode *temp = head;
        int count = 1;
        while(temp->next!=nullptr){
            count++;
            temp = temp->next;
        }
        temp->next = head;
        k = k % count;
        for(int i = 0;i < count-k; i++){
            temp=temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};