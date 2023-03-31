// Source : https://leetcode.cn/problems/intersection-of-two-linked-lists/
// Author : guoshuai wei
// Date   : 2023-03-31

#include "node.cpp"
#include <unordered_set>
using namespace std;

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

ListNode *getIntersectionNode1(ListNode *headA, ListNode *headB) {
    unordered_set<ListNode *> temp;
    for (; headA != nullptr;) {
        temp.insert(headA);
        headA = headA->next;
    }
    for (;headB !=nullptr;) {
        if (temp.find(headB) != temp.end()) {
            return headB;
        }
        headB = headB->next;
    }
    return nullptr;
}