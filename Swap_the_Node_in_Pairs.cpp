class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *slow=head;
       // ListNode *fast=head->next;
        
        if(head==NULL||head->next==NULL)
            return head;
        while(slow!=NULL){
            int temp=slow->val;
            slow->val=slow->next->val;
           slow->next->val=temp;
            slow=slow->next->next;
        }
        return head;
    }
};