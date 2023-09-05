/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr=head;
        Node* copy=NULL;
        Node* second=NULL;

        if(head==NULL) return copy;
        else{
        while(curr){
            if(copy==NULL){
                copy=new Node(curr->val);
                second=copy;
            }else{
                copy->next=new Node(curr->val);
                copy=copy->next;
            }
            curr=curr->next;
            
        }
        }
        //step-2
        unordered_map<Node*,Node*>mp;
        Node* ptr=second;
        Node* temp=head;
        while(temp && ptr){
            mp[temp]=ptr;
            ptr=ptr->next;
            temp=temp->next;
        }
        ptr=second;
        temp=head;
        while(ptr && temp){
            ptr->random=mp[temp->random];
            ptr=ptr->next;
            temp=temp->next;
        }

    return second;
    }
};
