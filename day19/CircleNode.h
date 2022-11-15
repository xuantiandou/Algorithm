//
// Created by xiaodou on 2022/11/14.
//判断是否有环链表
//

#ifndef ALGORITHM_CIRCLENODE_H
#define ALGORITHM_CIRCLENODE_H

#include "../CommonHeader.h"

//使用快慢指针。  如果有环 快指针总会赶上慢指针的
class CircleNode {
public:
    static void isCircleNode() {

        ListNode *pNode = getCircleNode();

        //从head开始
        ListNode *slow = pNode;
        ListNode *fast = pNode;

        do {
            if (fast == nullptr || fast->next == nullptr) {
                PRINT(0)
                return;
            }
            slow = slow->next;
            fast = fast->next->next;
        } while (slow != fast);
        PRINT(1)


    }

};


#endif //ALGORITHM_CIRCLENODE_H
