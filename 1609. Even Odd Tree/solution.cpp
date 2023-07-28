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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*>q;
        
        int level=0;

        if(!root) 
        {
            return -1;
        }

        else {
            q.push(root);
            int n;

        while(!q.empty()){
        TreeNode* node ;
          vector<int>helper;
          n=q.size();
          for(int i=0;i<n;i++){
                    node = q.front();
                    helper.push_back(node->val);
                    q.pop();

                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
          }

          if(helper.size()==1)
          {
              if(level%2==0 && helper[0]%2==0)return false;
              if(level%2!=0 && helper[0]%2!=0)return false;
          }

          for(int i=0;i<helper.size()-1;i++)
          {
             if((level%2==0 && helper[i]>=helper[i+1]) || (level%2!=0 && helper[i]<=helper[i+1])) return false;
             if( (level%2==0 && (helper[i]%2==0 || helper[i+1]%2==0) ) || (level%2!=0 && (helper[i]%2!=0 || helper[i+1]%2!=0) ) ) return false;
          }
          level++;

        }
        }
        return true;
    }
};
