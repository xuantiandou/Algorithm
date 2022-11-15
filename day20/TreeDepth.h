//
// Created by xiaodou on 2022/11/15.
//计算二叉树的最大深度
//

#ifndef ALGORITHM_TREEDEPTH_H
#define ALGORITHM_TREEDEPTH_H

#include "../CommonHeader.h"

class TreeDepth {

public:
    static
    void getTreeDepth() {
        TreeNode *tree = getTree();
        int i = getMaxDepth(tree);
        PRINT(i)
        //dfs 也就是深度遍历， 最大深度是 max(l,r)+1  也就是left的最大深度和right的最大深度取大值 +1
    }

private:
    static
    int getMaxDepth(TreeNode *node) {
        if (node == nullptr) {
            return 0;
        }
        return max(getMaxDepth(node->left), getMaxDepth(node->right)) + 1;
    }
};


#endif //ALGORITHM_TREEDEPTH_H
