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
    void swap(TreeNode* a, TreeNode* b){
        int c = a->val;
        a->val=b->val;
        b->val=c;
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        int level=0;
        int n;
        if(!root) return NULL;

        q.push(root);
        while(!q.empty()){
            n=q.size();
            vector<TreeNode*>temp;
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node);
             if(node->left) q.push(node->left);
             if(node->right) q.push(node->right);
            }
            if(level%2!=0){
                int i=0;
                int j=temp.size()-1;
                while(i<=j){
                    swap(temp[i],temp[j]);
                    i++;
                    j--;   
                }
            }
            level++;
            
        }
        return root;
    }
};
