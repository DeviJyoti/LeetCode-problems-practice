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
    int sum=0;
    int solve(TreeNode* root,string str){
       
        if(!root) return sum;

        if(!root->left && !root->right){
            str+=to_string(root->val);
            sum+=stoi(str);
        }
        str+=to_string(root->val);
        solve(root->left,str);
        solve(root->right,str);
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        string str = "";
        return solve(root,str);
    }
};
