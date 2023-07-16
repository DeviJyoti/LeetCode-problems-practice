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
      int solve(TreeNode* node){
        if(!node){return 0;}
        return 1 + solve(node->left) + solve(node->right);
    }
    
   
    int countNodes(TreeNode* root) {
        return solve(root);
    }
};
