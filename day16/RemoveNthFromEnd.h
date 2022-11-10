//
// Created by xiaodou on 2022/11/9.
//移除链表的倒数第N个节点 并返回头结点
//

#ifndef ALGORITHM_REMOVENTHFROMEND_H
#define ALGORITHM_REMOVENTHFROMEND_H

#include "../CommonHeader.h"



class RemoveNthFromEnd {
public:
    static void removeNthFromEnd() {
        int n = 1;
        ListNode *listNode = new ListNode(1);
        add(listNode);
        ListNode *pre = listNode;
        ListNode *head = listNode;
        int size = length(listNode);

        int last = size - n;
        if (last == 0) {

        }

        for (int i = 0; i < last-1; ++i) {
            pre = pre->next; //找到前一个节点
        }

        pre->next = pre->next->next;


        while (head->next) {
            PRINT(head->val)
            head=head->next;
        }

    }

    /**
     * 快慢指针
     */
    static void removeNthFromEnd2() {
        int n = 4;
        ListNode *listNode = new ListNode(1);
        add(listNode);
        ListNode *head = listNode;

        ListNode *slow = listNode;
        ListNode *fast = listNode;

        //先让fast先移动
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }

        if (!fast) {
            //说明删除的是第一个

        }

        //slow 和 fast 一起移动  slow移动到的点就是倒数第n个的前一个
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;


        while (head->next) {
            PRINT(head->val)
            head=head->next;
        }
    }

private:

    static int length(ListNode *node) {
        int size = 0;
        while (node = node->next) {
            size++;
        }
        return size;
    }

    static void add(ListNode *listNode) {
        listNode->next = new ListNode(2);
        listNode->next->next = new ListNode(3);
        listNode->next->next->next = new ListNode(4);
        listNode->next->next->next->next = new ListNode(5);
    }
};


#endif //ALGORITHM_REMOVENTHFROMEND_H
