class Solution {
    void helper(TreeNode *root,vector<int>& order){
        if(root != NULL){
        helper(root->left,order);
        order.push_back(root->val);
        helper(root->right,order);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> order;
        helper(root,order);
        return order;
    }
    
};