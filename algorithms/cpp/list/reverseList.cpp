// Source : https://leetcode.cn/problems/reverse-linked-list/
// Author : guoshuai wei
// Date   : 2023-04-01
// 206

#include "node.h"

ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* pre = head;
    ListNode *cur = head->next;
    pre->next = nullptr;
    while (cur != nullptr) {
        ListNode* temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}