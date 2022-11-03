//
// Created by xiaodou on 2022/11/3.
//

#ifndef ALGORITHM_FINDFIRSTNOREPEAT_H
#define ALGORITHM_FINDFIRSTNOREPEAT_H

#include "../CommonHeader.h"

class FindFirstNoRepeat {
public:
    static void findFirstNoRepeat() {
        string s = "hheelloo";
        unordered_map<char, int> m;
        for (auto ch: s) {
            ++m[ch];
        }


        for (int i = 0; i < s.size(); ++i) {
            if (m[s[i]] == 1) {
                PRINT(i);
                break;
            }
        }




    }

};


#endif //ALGORITHM_FINDFIRSTNOREPEAT_H
