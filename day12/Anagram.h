//
// Created by xiaodou on 2022/11/5.

//异位词  在A中出现的每个字符的次数 和B中一模一样
//

#ifndef ALGORITHM_ANAGRAM_H
#define ALGORITHM_ANAGRAM_H

#include "../CommonHeader.h"

class Anagram {

public:
    static void isAnagram() {
        string a = "abbaccdefg";
        string b = "ababcdefgc";
        unordered_map<int, int> m;
        for (auto &ch:a) {
            m[ch] = m[ch] + 1;
        }

        for (auto &ch:b) {
            m[ch] = m[ch] - 1;
        }

        auto begin = m.begin();
        while (begin != m.end()) {
            if (begin->second != 0) {
                PRINT(0);
                return;
            }
            begin++;
        }
        PRINT(1);

    }
};


#endif //ALGORITHM_ANAGRAM_H
