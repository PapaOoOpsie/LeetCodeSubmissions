class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prehead = new ListNode();
        ListNode *pre = prehead;
        ListNode *cur1 = l1, *cur2 = l2;
        int digit = 0;
        
        while(cur1 || cur2 || digit > 0){
            if(cur1){
                digit += cur1->val;
                cur1 = cur1->next;
            }
            if(cur2){
                digit += cur2->val;
                cur2 = cur2->next;
            }
            ListNode *tmp = new ListNode(digit%10);
            pre->next = tmp;
            pre = pre->next;
            digit/=10;
        }
        
        return prehead->next;
    }
};

ListNode* reverse(ListNode* h){
    if(!h || !h->next) return h;

    ListNode* prev = nullptr;
    ListNode* cur = h;
    while(cur){
        ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    return prev;
}