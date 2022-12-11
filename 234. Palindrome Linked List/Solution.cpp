//link:-https://leetcode.com/problems/palindrome-linked-list/
//code:-

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

//................FIRST METHOD USING VECTOR.............
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>vec;
        ListNode* ptr;
        ptr=head;
        while(ptr!=nullptr)
        {
            vec.push_back(ptr->val);
            ptr=ptr->next;
        }
        int i=0;
        int j=vec.size()-1;
        for(i=0;i<vec.size()/2;i++)
        {
            if(vec[i]==vec[j]) 
            {
               j--;
            }
            else
            {
                return false;
                break;
            }
            
        }
        return true;
    }
};

//...........SECOND METHOD UDSING STACK...........
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        if(head==NULL)
            return true;
        s.push(head->val);
        ListNode* t=head;
        while(t->next!=NULL){
            t=t->next;
            s.push(t->val);
        }
        t=head;
        while(t!=NULL)
        {
            if(t->val==s.top())
            {
                s.pop();
                t=t->next;
            }
            else
                return false;
        }
        return true;
    }
};
