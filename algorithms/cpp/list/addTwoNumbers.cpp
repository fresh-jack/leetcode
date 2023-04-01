// Source : https://leetcode.cn/problems/add-two-numbers/
// Author : guoshuai wei
// Date   : 2023-04-01
// 2

#include "node.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head = new ListNode(-1);
    ListNode *cur = head;
    int carry = 0;
    for (; l1 != nullptr || l2 != nullptr;) {
        int temp = 0;
        if (l1 != nullptr) {
            temp += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            temp += l2->val;
            l2 = l2->next;
        }
        temp += carry;
        cur->next = new ListNode(temp % 10);
        cur = cur->next;
        carry = temp / 10;
    }
    if (carry > 0 ) {
        cur->next = new ListNode(1);
    }

    return head->next;
}