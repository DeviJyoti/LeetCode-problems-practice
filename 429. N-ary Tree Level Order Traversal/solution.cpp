/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      vector<vector<int>>ans;
       queue<Node*>q;
       if(!root) return ans;
       q.push(root);
       while(!q.empty()){
           vector<int>helper;
           int n = q.size();
           for(int i=0;i<n;i++){
               Node* node=q.front();
               q.pop();
               helper.push_back(node->val);
              for(Node* & child : node->children){
                  q.push(child);
              }
           }
           ans.push_back(helper);
       }
       return ans;
    }
};
