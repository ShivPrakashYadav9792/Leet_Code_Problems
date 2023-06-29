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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *newhead=new ListNode();
        while(head){
        ListNode *next=head->next;
        ListNode *temp=newhead;
            while(temp->next!=NULL&&temp->next->val<head->val)
                temp=temp->next;
                head->next=temp->next;
                temp->next=head;
                head=next;
        }
        return newhead->next;
    }
};