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
    vector<int> res;
    void traversal(struct TreeNode* head)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        traversal((head)->left);
        // cout << (head)->val;
        res.push_back(head->val);
        traversal((head)->right);
    }
}


    vector<int> inorderTraversal(TreeNode* root) {
        
        traversal(root); 
        return res;
    }
};
