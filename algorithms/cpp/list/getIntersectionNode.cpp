// Source : https://leetcode.cn/problems/intersection-of-two-linked-lists/
// Author : guoshuai wei
// Date   : 2023-03-31

#include "node.cpp"

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* pA = headA;
    ListNode *pB = headB;
    for (; pA != pB ;) {
        if (pA == nullptr) {
            pA = headB;
        } else {
            pA = pA->next;
        }
    
        if (pB == nullptr) {
            pB = headA;
        } else {
            pB = pB->next;
        }
    }
    return pA;
}