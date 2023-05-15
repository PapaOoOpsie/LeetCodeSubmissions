class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        
        ListNode *slow = dummy, *fast = dummy;
        
        for(int i = 0; i < n+1; ++i){
            fast = fast->next;
        }
        
        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
      
        ListNode* tmp = slow->next;
        slow->next = slow->next->next;
        delete tmp;
        
        return dummy->next;
    }
};