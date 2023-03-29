// Source : https://oj.leetcode.com/problems/two-sum/
// Author : guoshuai wei
// Date   : 2023-03-29
/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode *head = new ListNode();
    ListNode *cur = head;
    for (;l1 != nullptr || l2 != nullptr;) {
        int num1 = 0, num2 = 0;
        if (l1 != nullptr) {
            num1 = l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            num2 = l2->val;
            l2 = l2->next;
        }
        int c = num1 + num2 + carry;
        cur->next = new ListNode(c % 10, nullptr);
        carry = c / 10;
        cur = cur->next;
    }
    if (carry > 0) {
        cur->next = new ListNode(carry, nullptr);
    }
    return head->next;
}