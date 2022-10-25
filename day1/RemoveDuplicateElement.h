//
// Created by xiaodou on 2022/10/24.
//移除 递增数组中的重复元素
//

#ifndef ALGORITHM_REMOVEDUPLICATEELEMENT_H
#define ALGORITHM_REMOVEDUPLICATEELEMENT_H

#include <vector>
#include <iostream>

using namespace std;

class RemoveRepeatElement {

public:

    /**
     * 时间复杂度 0(n)  空间 O(1)
     */
    static void removeDuplicateElement() {
        std::vector<int> v = {0, 0, 1, 1, 2, 3, 4, 4, 5, 5, 6, 7, 8, 9, 10, 12};


        // 两个指针 p q ，当p q 不相等的时候就交换p+1 和q  p++
        int p = 0, q = 1;

        for (int i = 0; i < v.size(); i++) {
            if (v[p] != v[q]) {
                v[p + 1] = v[q];
                p++;
            }
            q++;
        }


        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << endl;
        }
        cout << "返回的k: " << p + 1 << endl;
    }


};

#endif //ALGORITHM_REMOVEDUPLICATEELEMENT_H
