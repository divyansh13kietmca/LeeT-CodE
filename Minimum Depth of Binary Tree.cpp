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
    int minDepth(TreeNode* root) {
        if (root == nullptr)
        {
            return 0;
        }
        else if(root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }
        else
        {
            int l = 99999; int r = 99999;
            if(root->left != nullptr)
            {
                l = minDepth(root->left);
            }
            if(root->right != nullptr)
            {
                r = minDepth(root->right);
            }
            return min(l,r)+1;
        }
    }
};
