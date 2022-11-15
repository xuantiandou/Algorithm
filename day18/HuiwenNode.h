//
// Created by xiaodou on 2022/11/14.
//回文链表
//

#ifndef ALGORITHM_HUIWENNODE_H
#define ALGORITHM_HUIWENNODE_H

#include "../CommonHeader.h"

class HuiwenNode {
public:
    //转为数组 然后再通过双指针
    static void isHuiwen() {
        auto head = getNodeList();
        vector<int> value;
        while (head) {
            value.push_back(head->val);
            head = head->next;
        }

        //双指针判断
        int p = 0;
        int q = value.size() - 1;
        while (p != q) {
            if (value[p] != value[q]) {
                PRINT(false)
                return;
            }
            p++;
            q--;
        }
        PRINT(true)
    }
};


#endif //ALGORITHM_HUIWENNODE_H
