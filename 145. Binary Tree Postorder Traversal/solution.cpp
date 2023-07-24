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
    void postorder(TreeNode* root){
        
        if(root->left) postorder(root->left);
        if(root->right) postorder(root->right);
        res.push_back(root->val);
    }
     vector<int> postorderTraversal(TreeNode* root){
        
        if(root==NULL) return res;
         postorder(root);
         return res;
    }
   
};
