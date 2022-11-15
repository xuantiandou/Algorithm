//
// Created by xiaodou on 2022/10/26.
//

#ifndef ALGORITHM_COMMONHEADER_H
#define ALGORITHM_COMMONHEADER_H

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <string>
#include "ListNode.h"

ListNode *getNodeList() {
    auto listNode = new ListNode(1);
    listNode->next = new ListNode(2);
    listNode->next->next = new ListNode(1);
    listNode->next->next->next = new ListNode(2);
    listNode->next->next->next->next = new ListNode(1);
    return listNode;
}

ListNode *getCircleNode() {
    auto listNode = new ListNode(1);
    listNode->next = new ListNode(2);
    listNode->next->next = new ListNode(3);
    ListNode *pNode = new ListNode(4);
    listNode->next->next->next = pNode;
    listNode->next->next->next->next = new ListNode(5);
    listNode->next->next->next->next->next = new ListNode(6);
    listNode->next->next->next->next->next->next = pNode;
    return listNode;
}


struct TreeNode {
    TreeNode *left{nullptr};
    TreeNode *right{nullptr};
    int root;

    TreeNode(int root) : root(root) {

    }

    TreeNode(TreeNode *left, TreeNode *right, int root) : left(left), right(right), root(root) {}
};

static TreeNode *getTree() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->right = new TreeNode(8);
    return root;
}

void add() {

}

#define PRINT(i) cout<<i<<endl;
using namespace std;
#endif //ALGORITHM_COMMONHEADER_H
