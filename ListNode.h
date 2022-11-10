//
// Created by xiaodou on 2022/11/10.
//

#ifndef ALGORITHM_LISTNODE_H
#define ALGORITHM_LISTNODE_H


struct ListNode {
    int val{0};
    ListNode *next{nullptr};

    ListNode(int val) : val(val) {}

    ListNode(ListNode *next) : next(next) {}

    ListNode(int val, ListNode *next) : val(val), next(next) {}
};


#endif //ALGORITHM_LISTNODE_H
