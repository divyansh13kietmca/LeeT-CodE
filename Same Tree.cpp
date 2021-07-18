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
    int traversal(TreeNode** root, vector<int> *arr)
    {
        if (*root == NULL)
        {
            (*arr).push_back(-1111);
        }
        else
        {
            // cout << (*root)->val;
            (*arr).push_back((*root)->val);
            traversal(&((*root)->left),arr);
            traversal(&((*root)->right),arr);
           
            
        }
        return 0;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> a;
        vector<int> b;
        traversal(&p,&a);
        traversal(&q,&b);
        if (a == b)
        {
            return true;
        }
        else
        return false;
    }
};
