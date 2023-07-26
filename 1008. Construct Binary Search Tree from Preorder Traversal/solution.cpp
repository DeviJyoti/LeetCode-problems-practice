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
     TreeNode* solve(vector<int>& preorder,int rootindex,int right){
         if(rootindex >=right) return NULL;
         int value = preorder[rootindex];
         TreeNode* root = new TreeNode(value);

         int i = rootindex+1;
         while(i <=right-1 && preorder[i]<value){
             i++;
         }
         root->left=solve(preorder,rootindex+1,i);
         root->right=solve(preorder,i,right);
         return root;
     }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        return solve(preorder,0,n);
    }
};
