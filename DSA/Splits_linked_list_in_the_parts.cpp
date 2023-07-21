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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode *temp=head;
         ListNode *curr=head;
         ListNode *prev=NULL;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int eachsize=count/k;
        int extra=count%k;
        while(head){
            ans.push_back(curr);
            int p=eachsize;
            while(p>0){
                p--;
                prev=curr;
                curr=curr->next;
            }
            if(extra!=0&&curr!=NULL){
                extra--;
                prev=curr;
                curr=curr->next;
            }
            if(prev!=NULL){
                head=curr;
                prev->next=NULL;
            }
        }
        while(ans.size()!=k){
            ans.push_back(NULL);
        }
        return ans;
    }
};