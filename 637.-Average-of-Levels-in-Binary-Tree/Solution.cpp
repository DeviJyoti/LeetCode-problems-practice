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
class Solution 
{
public:
 void PushElementOfSameLevel(vector<double>&element,int level,int height,TreeNode* root)
 {
     if(root==nullptr) return;
     if(level==1) 
     {
         element.push_back(root->val);
     }
     if(level>1)
     {
       PushElementOfSameLevel(element,level-1,height,root->left);
          PushElementOfSameLevel(element,level-1,height,root->right);
     }
 }
      int heightoftree(TreeNode* root)
    {
        int lheight=0;
        int rheight=0;
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr ) return 1;
        
        if(root->left != nullptr) lheight=heightoftree(root->left);
        if(root->right != nullptr) rheight=heightoftree(root->right);
        
        if(lheight>rheight) return lheight+1;
        else
            return rheight+1;
        
    }
    
    vector<double> averageOfLevels(TreeNode* root)
    {
        
        double average=0;
        vector<double>element;
        int height=heightoftree(root);
        vector<double>result;
        if(height==0) return result;
        for(int level=1;level<=height;level++)
        {
            PushElementOfSameLevel(element,level,height,root);
            if(element.size()!=0)
            {
                double sum=0;
                for(int i=0;i<element.size();i++)
                {
                 sum+=element[i];    
                }
                average=sum/element.size();
            }
            result.push_back(average);
            element.clear();
        }
        return result;
    }
    
};
