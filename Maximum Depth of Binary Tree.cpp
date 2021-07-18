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
  
    int maxDepth(TreeNode* root) {
        int height;
        if (root != NULL)
            {
            height = max(maxDepth(root->left),maxDepth(root->right));
            return height+1;
        }
        return 0;
        }
};
