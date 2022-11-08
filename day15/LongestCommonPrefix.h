//
// Created by xiaodou on 2022/11/8.
//查找字符串数组的最长公共前缀
//

#ifndef ALGORITHM_LONGESTCOMMONPREFIX_H
#define ALGORITHM_LONGESTCOMMONPREFIX_H

#include "../CommonHeader.h"

class LongestCommonPrefix {
public:
    static void longestCommonPrefix() {
        string s[] = { "hello", "hel","heo man"};

        //假设 s[0] 就是最长的前缀
        string prefix = s[0];
        int size = sizeof(s) / sizeof(string);
        for (int i = 1; i < size; ++i) {
            prefix = longestCommonPrefix(prefix, s[i]);
        }


        cout << prefix << endl;
    }

private:
    static string longestCommonPrefix(string &s1, string &s2) {
        string s;
        int size = min(s1.size(), s2.size());
        for (int i = 0; i < size; ++i) {
            char c1 = s1[i];
            char c2 = s2[i];
            if (c1 != c2) {
                return s;
            }
            s += c1;
        }

        return s;
    }
};


#endif //ALGORITHM_LONGESTCOMMONPREFIX_H
