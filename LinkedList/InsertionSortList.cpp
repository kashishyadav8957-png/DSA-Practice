class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head) return nullptr;

        ListNode dummy(0); 
        ListNode* curr = head; 

        while (curr) {
            ListNode* prev = &dummy;   
            ListNode* next = curr->next; 

            while (prev->next && prev->next->val < curr->val) {
                prev = prev->next;
            }

           
            curr->next = prev->next;
            prev->next = curr;

            
            curr = next;
        }

        return dummy.next;
    }
};
