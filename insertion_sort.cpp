class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        
        ListNode* sorted = new ListNode(0);
        
        
        ListNode* curr = head;
        while (curr) {
            ListNode* prev = sorted;
            
            while (prev->next && prev->next->val < curr->val) {
                prev = prev->next;
            }
            
            
            ListNode* next = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            
            
            curr = next;
        }
        
        return sorted->next;
    }
};

