// Link :- https://leetcode.com/problems/range-sum-of-bst/description/


// code :-


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
    void func(TreeNode* root, int low, int high)
    {
        if(root==nullptr) return; //base condition

        if(root->val>=low && root->val<=high)
        {
            sum=sum+root->val;
        }
        func(root->left,low,high);
        func(root->right,low,high);
    }


    int rangeSumBST(TreeNode* root, int low, int high) {
        func(root,low,high);
        return sum;
    }
};
