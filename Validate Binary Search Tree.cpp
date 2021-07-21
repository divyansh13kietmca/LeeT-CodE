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
class Solution {
public:
    bool bst(TreeNode* root, TreeNode* lf = NULL, TreeNode* rt = NULL)
    {
        if(root == NULL)
        {
            return true;
        }
        if(lf != NULL && root->val <= lf->val)
        {
            return false;
        }
        if(rt != NULL && root->val >= rt->val)
        {
            return false;
        }
        return bst(root->left,lf,root)&&bst(root->right,root,rt);
    }
    bool isValidBST(TreeNode* root) {
        
        return bst(root,NULL,NULL);
    }
};
