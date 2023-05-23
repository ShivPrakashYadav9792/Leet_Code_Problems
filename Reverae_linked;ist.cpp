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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int m=left;
        int n=right;
        if(head==NULL||head->next==NULL||m==n)
    return head;
    
ListNode *temp=head;
ListNode *start=head;
int i=1;

while(i<m&&temp->next!=NULL){
    start=temp;
    temp=temp->next;
    i++;
}

ListNode*curr=temp->next;
ListNode*prev=temp;
ListNode*t;
prev->next=NULL;
while(i<n&&curr!=NULL){
    t=curr->next;
    curr->next=prev;
    prev=curr;
    curr=t;
    i++;
}
start->next=prev;
temp->next=curr;
if(m==1)
    return prev;
return head;
    }
};