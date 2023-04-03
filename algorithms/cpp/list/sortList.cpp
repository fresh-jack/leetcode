// Source : https://leetcode.cn/problems/sort-list/
// Author : guoshuai wei
// Date   : 2023-04-02
// 148

// TODO: 
#include "node.h"
#include "mergeTwoLists.cpp"

ListNode* sortList(ListNode* head) {
    return sortList(head, nullptr);
}

ListNode* sortList(ListNode* head, ListNode* tail) {
    if (head == nullptr) {
        return head;
    }
    if (head->next == tail) {
        head->next = nullptr;
        return head;
    }
    ListNode *slow = head, *fast = head;
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
        if (fast != tail) {
            fast = fast->next;
        }
    }
    ListNode *mid = slow;
    return mergeTwoLists(sortList(head, mid), sortList(mid, tail));
}