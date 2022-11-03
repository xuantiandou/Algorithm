//
// Created by xiaodou on 2022/11/3.
//翻转数字
//

#ifndef ALGORITHM_REVESEINT_H
#define ALGORITHM_REVESEINT_H

#include "../CommonHeader.h"

class ReverseInt {
public:
    static void reverseInt() {

        int i = 1232413426;
        string s = to_string(i);

        reverse(s.begin(), s.end());
        int j = 0;
        try {
            j = stoi(s);
            if (i < 0) {
                j = -j;
            }
        } catch (exception ex) {
        }

        PRINT(j);

    }

};


#endif //ALGORITHM_REVESEINT_H
