/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
 //o(n) APPROACH
    void deleteNode(ListNode* node) { 
        ListNode* temp;
        while(node->next != NULL){
           temp = node;
           node->val = node->next->val;
           node = node->next;
    }
       temp->next = NULL;
    }
    
};



// o(1) aPPROACH

void deleteNode(ListNode* node) { 
           node->val = node->next->val;
           node->next = node->next->next;
    }
