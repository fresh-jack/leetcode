// Source : https://leetcode.cn/problems/linked-list-cycle/
// Author : guoshuai wei
// Date   : 2023-03-31
// 141

#include <unordered_set>
#include "node.h"
using namespace std;

// hasCycle 快慢指针
bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
            return false;
    }
    ListNode* slow = head;
    ListNode* fast = head->next;
    for (;slow != fast;) {
        if (fast == nullptr || fast->next == nullptr) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    return true;
}

// 哈希表
bool hasCycle1(ListNode* head) {
    unordered_set<ListNode*> temp;
    for (; head != nullptr; ) {
        if(temp.find(head) != temp.end()) {
            return true;
        } else {
            temp.insert(head);
        }
        head = head->next;
    }
    return false;
}
