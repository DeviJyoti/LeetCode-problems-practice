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
   bool check(TreeNode* root, int targetSum ,int &sum){
       if(root==NULL) return false;
       sum=sum+root->val;
        if(sum==targetSum && root->left==NULL && root->right==NULL) return true;
       bool left=check(root->left,targetSum,sum);
       bool right=check(root->right,targetSum,sum);
       sum-=root->val;
       return left || right;
   }
    bool hasPathSum(TreeNode* root, int targetSum) {
    if(root==nullptr) return 0;
    int sum=0;
    bool ans=check(root,targetSum,sum);
   return ans;
    }
};
