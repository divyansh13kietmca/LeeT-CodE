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
    
    void Mirror(TreeNode* root)
    {
        TreeNode *temp;
        if(root == NULL)
        {
            return;
        }
        else
        {
            temp = root->left;
            root->left = root->right;
            root->right = temp;
            Mirror(root->left);
            Mirror(root->right);
        }
    }
    
    TreeNode* invertTree(TreeNode* root) {
        Mirror(root);
        return root;
    }
};
