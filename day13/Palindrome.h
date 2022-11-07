//
// Created by xiaodou on 2022/11/5.

//回文 可能有如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，
// 短语正着读和反着读都一样。则可以认为该短语是一个 回文串 。
//

#ifndef ALGORITHM_PALINDROME_H
#define ALGORITHM_PALINDROME_H

#include "../CommonHeader.h"

class Palindrome {

public:
    static void isPalindrome() {
        string s = "A man, a plan, a canal: Panamaa";
        //处理s1的非字符和数字
        string s1;
        for (char c: s) {
            if (isalnum(c))
                s1 += tolower(c);
        }
        //逆序
        string s2(s1.rbegin(), s1.rend());
        bool huiwen = s1 == s2;
        PRINT(huiwen)
    }


    //使用双指针实现
    static void isPalindrome1() {
//        string s = "A man, a plan, a canal: Panama";
        string s = "ababa";
        //处理s1的非字符和数字
        string s1;
        for (char c: s) {
            if (isalnum(c))
                s1 += tolower(c);
        }

        int left = 0;
        int right = s1.size() - 1;

        while (left != right) {
            if (s1[left] != s1[right]) {
                PRINT(s1[left])
                PRINT(s1[right])
                PRINT(false)
                return;
            }
            left++;
            right--;
        }
        PRINT(true)
    }
};


#endif //ALGORITHM_PALINDROME_H
