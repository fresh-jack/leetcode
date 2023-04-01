// Source : https://leetcode.cn/problems/palindrome-linked-list/
// Author : guoshuai wei
// Date   : 2023-04-01
// 234

#include "node.h"
#include <vector>
using namespace std;

// isPalindrome 空间复杂度O(n)
bool isPalindrome(ListNode* head) {
    vector<int> temp;
    for (;head != nullptr;) {
        temp.push_back(head->val);
        head = head->next;
    }
    for (int i = 0, j = temp.size() - 1; i < j; i++, j--) {
        if (temp[i] != temp[j]) {
            return false;
        }
    }
    return true;
}


bool isPalindrome1(ListNode* head) { 

}
