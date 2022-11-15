//
// Created by   xiaodou on 2022/11/10.
//反转单链表
//

#ifndef ALGORITHM_REVERSENODE_H
#define ALGORITHM_REVERSENODE_H

#include "../CommonHeader.h"

class ReverseNode {
public:
    static void reverseNode() {
        auto head = new ListNode(1);
        add(head);

//        //打印
        ListNode *pre = nullptr;
        ListNode *current = head;
        //for循环让下一个节点的next指向上一个节点
        while (current) {
            auto next = current->next; //next 节点
            current->next = pre;
            pre = current;
            current = next;
        }


//        //打印
        while (pre) {
            PRINT(pre->val)
            pre = pre->next;
        }

    }

private:


    static void add(ListNode *listNode) {
        listNode->next = new ListNode(2);
        listNode->next->next = new ListNode(3);
        listNode->next->next->next = new ListNode(4);
        listNode->next->next->next->next = new ListNode(5);
    }

};


#endif //ALGORITHM_ REVERSENODE_H
