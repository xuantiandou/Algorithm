//
// Created by xiaodou on 2022/10/28.

//一个数组 每个数字出现2次 只有一个出现一次 。找出出现一次的那个   时间复杂度要求线性
//

#ifndef ALGORITHM_FINDSINGLEELEMENT_H
#define ALGORITHM_FINDSINGLEELEMENT_H

#include "../CommonHeader.h"

class FindSingleElement {


public:
    static void findSingleElement() {
        vector<int> v = {1, 1, 2, 2, 5, 5, 3, 3, 8, 8, 9, 9, 10, 10, 5, 121, 121, 32, 32};


        int begin = 0;
        for (int i = 0; i < v.size(); ++i) {
            begin ^= v[i];
        }

        cout << "begin is :" << begin << endl;

    }

};


#endif //ALGORITHM_FINDSINGLEELEMENT_H
