class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
            return true;
        else if(p==NULL||q==NULL)
            return false;
        else if(p->val!=q->val)
            return false;
        int l=isSameTree(p->left,q->left);
        int r=isSameTree(p->right,q->right);
        if(l==1&&r==1)
        return true;
        else 
            return false;
    }
};