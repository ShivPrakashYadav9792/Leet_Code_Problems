class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=new ListNode(-1);
        ListNode* tempt=new ListNode(-1);
        ListNode* temp_head=temp;
        ListNode* tempt_head=tempt;
        while (head!=NULL){
            if (head->val<x){
                temp->next=head;
                temp=temp->next;
                head=head->next;
                temp->next=NULL;
            }
            else{
                tempt->next=head;
                tempt=tempt->next;
                head=head->next;
                tempt->next=NULL;
            }
        }
        temp-> next=tempt_head->next;

        return temp_head -> next;
    }
};