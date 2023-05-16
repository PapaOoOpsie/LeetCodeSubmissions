class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        
        int steps = 0;
        
        for(; steps < k && cur; ++steps){
            cur = cur->next;
        }
        
        if(steps < k) return head;
        
        cur = reverseKGroup(cur, k);
        
        for(int i = 0; i < k; ++i){
            ListNode* tmp = head->next;
            head->next = cur;
            cur = head;
            head = tmp;
        }
        
        return cur;
    }
};