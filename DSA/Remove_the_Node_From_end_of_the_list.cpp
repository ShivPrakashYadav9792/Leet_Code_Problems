class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        count=count-n;
        cout<<count<<" ";
        int c=0;
        if(head==NULL){
            return head;
      }
        if(count==0)
            return head->next;
        temp=head;
        while(temp!=NULL&&c<count-1){
            c++;
            temp=temp->next;
        }
        if(temp==NULL&&temp->next==NULL)
            return head;
        temp->next=temp->next->next;
        
        return head;
    }