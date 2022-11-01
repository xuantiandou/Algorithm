//
// Created by xiaodou on 2022/11/1.
//将 字符串中的字符 reverse
//

#ifndef ALGORITHM_REVERSECHAR_H
#define ALGORITHM_REVERSECHAR_H

#include "../CommonHeader.h"

class ReverseChar {

public:
    static void reverseChar() {
        vector<char> c = {'h', 'e', 'l', 'l', 'o'};

        int size = c.size();
        for (int i = 0; i < c.size()/2; ++i) {
            swap(c[i], c[size - 1 - i]);
        }

        for (int i = 0; i < size; ++i) {
            PRINT(c[i])

        }
    }

};


#endif //ALGORITHM_REVERSECHAR_H
