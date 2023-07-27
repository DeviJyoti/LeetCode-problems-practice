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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
       queue<TreeNode*>q;
       if(!root) return ans;
       q.push(root);
       int count=0;
       while(!q.empty()){
           count++;
           vector<int>helper;
           int n = q.size();
           for(int i=0;i<n;i++){
               TreeNode* node=q.front();
               q.pop();
               helper.push_back(node->val);
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
           }
           if(count%2==0){
               reverse(helper.begin(),helper.end());
           }
           ans.push_back(helper);
       }
       return ans;
    }
};
