// link :- https://leetcode.com/problems/odd-even-linked-list/description/

// code :- 



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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even;
        ListNode* eLast;
        ListNode* odd;
        ListNode* oLast;
        if(head!=nullptr)
        {
            odd=head;
            oLast=odd;
            if(head->next!=nullptr)
            {
                even=head->next;
                eLast=even;
                head=head->next->next;
                while(head!=nullptr)
                {
                    oLast->next=head;
                    oLast=oLast->next;
                    eLast->next=head->next;
                    eLast=eLast->next;
                    
                    if(head->next==nullptr)
                    break;

                    head=head->next->next;
                }
                oLast->next=even;
            }
        }
        return odd;

    }
};
