//Here we were given the node to be deleted and not the head
//https://leetcode.com/problems/delete-node-in-a-linked-list/description/

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp= node;
        while(temp->next->next !=NULL){
            temp->val=temp-> next->val;
            temp=temp->next;
        }
        temp->val=temp-> next->val;
        temp->next=NULL;

    }
};
