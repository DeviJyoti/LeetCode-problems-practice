//LINK:-https://leetcode.com/problems/remove-linked-list-elements/

//SOLUTION:-
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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* dummy=new ListNode(-1);//ek extra node bnai jo -1 se inilialise ki and then isme head store kr diya
        dummy->next=head;
        ListNode* ptr=dummy; //ptr ead se phle wali noed se suru hoga
  
        if(head==NULL) return NULL;
        while(ptr!=nullptr && ptr->next!=nullptr)
        {
            if(ptr->next->val==val)
            {
                ListNode* temp=ptr->next; //used extra node for delte a node
                ptr->next=temp->next;
                delete temp;
            }
            else
            {
                ptr=ptr->next;
            }
        }
        return dummy->next; //in otherwords it is head
    }
};
