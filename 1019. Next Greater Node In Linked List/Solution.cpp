// Link : https://leetcode.com/problems/next-greater-node-in-linked-list/description/


// Code : 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* hd) {
        vector<int> list;
        ListNode* head = hd;
        while(head)
        {
            list.push_back(head->val);
            head = head->next;
        }

        vector<int> ans(list.size(),0);
        stack<int> st;
        for(int i=0;i<list.size();i++)
        {
            while(!st.empty() && list[st.top()]<list[i])
            {
                ans[st.top()] = list[i];
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }
};
