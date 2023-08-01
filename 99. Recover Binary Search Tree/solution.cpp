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
    vector<int>vec;
    int i=0;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    void check(TreeNode* root){
        if(!root) return;
        check(root->left);
        if(vec[i]!=root->val) swap(vec[i],root->val);
         i++;
        check(root->right);
    }

    void recoverTree(TreeNode* root) {
    if(!root) return;
    inorder(root);
    sort(vec.begin(),vec.end());
    check(root);
        
    }
};
