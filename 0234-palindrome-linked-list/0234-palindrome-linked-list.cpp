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
    bool isPalindrome(ListNode* head) {               //optimised solution
    ListNode* slow=head;
    ListNode* fast=head;
    //Middle of the linked list
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

        //reverse the second half og the linkedlist
        ListNode* prev=NULL;
        ListNode* curr=slow;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        } 
        //compare first half and reversed second half
        ListNode* left=head;
        ListNode* right=prev;
        while(right!=NULL){
        if(left->val !=right->val){
            return false;
        }
        right=right->next;
        left=left->next;
        

    }
    return true;
        
    }
};