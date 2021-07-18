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
bool symmetry(TreeNode* root_s1, TreeNode* root_s2)
{
            if(!root_s1 && !root_s2)
        {
            return true;
        }
        else
        {
            if(root_s1 && root_s2)
            {
                if((root_s1)->val == (root_s2)->val){
                    return symmetry(root_s1->left,root_s2->right) && symmetry(root_s2->right,root_s1->left);
                }
            }
            return  false;
        }
}
    
    bool isSymmetric(TreeNode* root) {
        return symmetry(root,root);
    }
};
