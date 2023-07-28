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
    bool checkTree(TreeNode* root) {
        if(!root) return true;
        int sum =0;
        if(root->left) 
        {
            sum+=root->left->val;
            checkTree(root->left);

        }
        if(root->right) 
        {
            sum+=root->right->val;
            checkTree(root->right);

        }
        if(sum!=root->val) return false;
        
        return true;
    }
};
