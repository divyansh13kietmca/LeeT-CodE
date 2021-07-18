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
    void search(TreeNode* root,TreeNode **result,int value)
    {
        if(root == NULL || root->val == value)     
        {
            *result = root;
              return;
        }

        else if(root->val >= value)
        {
            search(root->left,result,value);
        }
        else
            search(root->right,result,value);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* result = nullptr;
        search(root,&result,val);
        return result;
    }
};
