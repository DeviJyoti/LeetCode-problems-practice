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
    vector<int>res;
    void preorder(TreeNode* root){
        res.push_back(root->val);
        if(root->left) preorder(root->left);
        if(root->right) preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root==NULL) return res;
         preorder(root);
         return res;
    }
};
