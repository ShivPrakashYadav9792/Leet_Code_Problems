/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *buildT(vector<int> &preorder, int pres, int pree, vector<int> &inorder, int ins, int ine)
    {
        if (ins > ine || pres > pree)
            return NULL;

        int rootData = preorder[pres];
        int pos = -1;

        for (int i = ins; i <= ine; i++)
        {
            if (inorder[i] == rootData)
            {
                pos = i;
                break;
            }
        }
        int lins = ins;
        int line = pos - 1;
        int lpres = pres + 1;
        int lpree = (line - lins) + lpres;
        int rins = pos + 1;
        int rine = ine;
        int rpres = lpree + 1;
        int rpree = pree;

        TreeNode *root = new TreeNode(rootData);
        root->left = buildT(preorder, lpres, lpree, inorder, lins, line);
        root->right = buildT(preorder, rpres, rpree, inorder, rins, rine);
        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int preLength = preorder.size();
        int inLength = inorder.size();
        return buildT(preorder, 0, preLength - 1, inorder, 0, inLength - 1);
    }
};