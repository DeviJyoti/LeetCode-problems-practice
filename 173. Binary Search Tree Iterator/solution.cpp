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
class BSTIterator {
public:
    stack<TreeNode*> st;  // Stack to store tree nodes

    // Function to push all left subtree nodes onto the stack
    void pushAll(TreeNode* node) {
        while (node) {
            st.push(node);
            node = node->left;
        }
    }

    // Constructor that initializes the iterator
    BSTIterator(TreeNode* root) {
        pushAll(root);  // Push all left subtree nodes onto the stack
    }

    // Function to return the next smallest element in the BST
    int next() {
        auto temp = st.top();  // Get the top node from the stack
        st.pop();  // Pop the node from the stack
        pushAll(temp->right);  // Push all left subtree nodes of the right child onto the stack
        return temp->val;  // Return the value of the popped node
    }

    // Function to check if there are any more elements in the BST
    bool hasNext() {
        return !st.empty();  // Return true if the stack is not empty, indicating there are more elements
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
