// Source : https://leetcode.cn/problems/remove-nth-node-from-end-of-list/
// Author : guoshuai wei
// Date   : 2023-04-01
// 19

#include "node.h"

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *dump = new ListNode(-1, head);
    ListNode* slow = dump;
    ListNode *fast = dump;
    for (int i = 0; i < n && fast != nullptr; i++) {
        fast = fast->next;
    }
    for (; fast != nullptr && fast->next != nullptr;) {
        fast = fast->next;
        slow = slow->next;
    }
    if (slow->next != nullptr) {
        slow->next = slow->next->next;
    }
    return dump->next;
}