class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
         if(head == NULL || head->next == NULL||k==0||k==1)
		return head;
        int size=0;
        ListNode*temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        if(k>size)
            return head;
        ListNode *prev = NULL;
	ListNode *curr = head;
	ListNode *next = NULL;
	int count=0;
	while(count<k&&curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr =next;
		count++;
	}
	if(next!=NULL)
	head->next=reverseKGroup(next,k);
	return prev;
    }
};