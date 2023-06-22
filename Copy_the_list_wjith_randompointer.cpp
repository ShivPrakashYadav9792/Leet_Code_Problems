/*
// Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node *temp=head;
        while(temp!=NULL){
         Node *tmp1=new Node(temp->val);
            tmp1->next=temp->next;
            temp->next=tmp1;
            temp=temp->next->next;    
    }
        temp=head;
        while(temp!=NULL){
            if(temp->random!=NULL)
            temp->next->random=temp->random->next;
            else
                temp->next->random=NULL;
            temp=temp->next->next;
        }
        
        Node *nh=NULL;
        temp=head;
        Node *ph=NULL;
        Node* rh=NULL;
        while(temp!=NULL){
            if(ph==NULL){
                ph=temp;
                cout<<ph<<":";
            }
            if(nh==NULL){
                nh=temp->next;
                rh=nh;
                temp=temp->next->next;
                cout<<nh<<" ";
                continue;
            }
            Node *npos=temp->next->next;
            ph->next=temp;
            ph=ph->next;
            nh->next=temp->next;
            temp=npos;
            nh=nh->next;
            cout<<ph<<":"<<nh<<" ";
        }
        ph->next=NULL;
        nh->next=NULL;
        return rh;
    }     
};