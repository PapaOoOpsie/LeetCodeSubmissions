class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        
        ListNode *pA = headA, *pB = headB;
        
        //if length of A and B are different, we will stop at 2nd iteration
        while(pA != pB){
            //if the first list ends, we reset the pointer to the head of another list
            pA = (pA == NULL)?headB:pA->next;
            pB = (pB == NULL)?headA:pB->next;
        }
        
        return pA;
    }
};