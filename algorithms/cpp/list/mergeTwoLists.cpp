// Source : https://leetcode.cn/problems/merge-two-sorted-lists/
// Author : guoshuai wei
// Date   : 2023-04-01
// 21

#include "node.h"

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *head = new ListNode(-1);
    ListNode *cur = head;
    for (;list1 != nullptr && list2 != nullptr;) {
        if (list1->val < list2->val) {
            cur->next = list1;
            list1 = list1->next;
        } else {
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    cur->next = list1 == nullptr ? list2 : list1;
    return head->next;
}