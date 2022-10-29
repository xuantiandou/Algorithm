//
// Created by xiaodou on 2022/10/29.
//将0移到数组的右面，保持数组的顺序
//

#ifndef ALGORITHM_REMOVEZERO_H
#define ALGORITHM_REMOVEZERO_H

#include "../CommonHeader.h"

class RemoveZero {

public:

    //快慢指针，指针A指向最终的数据  指针B指向源数据 B移动一下如果是非0 交换 当前指向A指与B指针交换，
    // 指针也往前移动一个，如果B指针是0 则A指针不要动
    //
    static void removeZero() {
        vector<int> a = {1, 2, 0, 3, 5, 4, 0, 6, 0, 9, 0, 10};
        int left = 0;
        int right = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[right] != 0) {
                swap(a[left],a[right]);
                left++;
            }
            right++;
        }

        for (int i = 0; i < a.size(); ++i) {
            PRINT(a[i]);
        }


    }
};


#endif //ALGORITHM_REMOVEZERO_H
