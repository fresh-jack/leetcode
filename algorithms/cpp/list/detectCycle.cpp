// Source : https://leetcode.cn/problems/linked-list-cycle-ii/description/
// Author : guoshuai wei
// Date   : 2023-04-02
// 142

#include "node.h"
#include <unordered_set>
using namespace std;

ListNode *detectCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    do {
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

ListNode *detectCycle1(ListNode *head) {
    unordered_set<ListNode *> s;
    while(head != nullptr) {
        if (s.find(head) != s.end()) {
            return head;
        }
        s.insert(head);
        head = head->next;
    }
    return nullptr;
}