// Source : https://leetcode.cn/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/
// Author : guoshuai wei
// Date   : 2023-04-10
// 15

#include <stdio.h>

int hammingWeight(u_int32_t n) {
    int result = 0;
    while (n > 0 ){
        result++;
        n &= n- 1;
    }
    return result;
}