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
    ListNode* rotateRight(ListNode* head, int k) {
        //reach th elast element 
        if(head==NULL || k==0) return head;
        ListNode* curr=head;
        int n=0;
        int len=1;
        
        while(curr->next){
            curr=curr->next;
            n++;
            len++;
        }
        //make circular list
        curr->next=head;
        k=k%len;

        int jump=n-k;
        
        curr=head;
        while(jump){
            curr=curr->next;
            jump--;
        }
        ListNode* newhead = curr->next;
        curr->next=NULL;
        return newhead;
    }
};
