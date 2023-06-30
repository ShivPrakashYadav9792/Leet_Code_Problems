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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>ans;
        stack<int>st1;
        stack<int>st2;
        while(l1!=NULL){
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            st2.push(l2->val);
            l2=l2->next;
        }
        int j,k;
        ListNode *list=NULL;
        int carry=0;
        while (!st1.empty()||!st2.empty()||carry!=0) {
            if (!st1.empty()){
                 j=st1.top();
                st1.pop();
            }
            else 
                j=0;
            if (!st2.empty()){
                k=st2.top();
                st2.pop();    
            }
            else
                k=0;
            int sum=j+k+carry;
        ListNode *temp=new ListNode(sum%10);
                temp->next=list;
                list=temp;
                carry=sum/10;
        }
         return list; 
    }
};