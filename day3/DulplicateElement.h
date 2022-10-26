//
// Created by xiaodou on 2022/10/26.
//判断数组是否有相同元素，如果有return true 否则 return false
//

#ifndef ALGORITHM_DULPLICATEELEMENT_H
#define ALGORITHM_DULPLICATEELEMENT_H

#include "../CommonHeader.h"

class DuplicateElement {


public:
    //先排序 在判断相邻是否有相同的  时间：O(nlogn） 空间 :O(logn)
    static bool hasDuplicateElement() {
        vector<int> array = {5, 223, 123, 6, 12, 143, 56, 7, 8, 32, 434, 545, 223, 555};

        sort(array.begin(), array.end());

        for (int i = 0; i < array.size(); ++i) {
            if (i < array.size() - 1)
                if (array[i] == array[i + 1]) {
                    return true;
                }
        }

        for (int i = 0; i < array.size(); ++i) {
            cout << array[i] << endl;
        }

        return false;
    }


    // O(n)    O(1)
    static bool hasDuplicateElement2() {
        vector<int> array = {5, 223, 123, 6, 12, 143, 56, 7, 8, 32, 434, 545,  555};

        unordered_set<int> set;

        for (int i = 0; i < array.size(); ++i) {
            if (set.find(array[i]) != set.end()) {
                return true;
            }
            set.insert(array[i]);
        }

        return false;
    }


};


#endif //ALGORITHM_DULPLICATEELEMENT_H
