//
// Created by xiaodou on 2022/10/30.
//找出+ 一个数等于一个target的书
//

#ifndef ALGORITHM_FINDPLUSTARGET_H
#define ALGORITHM_FINDPLUSTARGET_H

#include "../CommonHeader.h"

class FindPlusTarget {


public:
    //双重循环  时间 O(n^2)
    static void findPlusTarget() {
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int target = 4;

        int size = v.size();
        for (int i = 0; i < size; ++i) {
            int start = v[i];
            int need = target - start;
            for (int j = i + 1; j < size; ++j) {
                if (need == v[j]) {
                    PRINT(v[i])
                    PRINT(v[j])
                    return;
                }
            }
        }

    }

    //使用hash表  时间复杂度 O(n) 空间 O(n)
    //这里有一点技巧，就是用hash表的时候，现将第一个放进去，如果map里面没有，就会将第一个塞进去，到后面。
    //再去找的时候，就能将后面的和第一个累加在一起
    static void findPlusTarget2() {

        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int target = 13;

        unordered_map<int, int> m;
        for (int i = 0; i < v.size(); ++i) {
            int need = target - v[i];
            auto it = m.find(need);

            if (it != m.end()) {
                //找到了 就返回
                PRINT(v[i])
                PRINT(it->first)
                return;
            }

            m[v[i]] = i;
        }


    }


};


#endif //ALGORITHM_FINDPLUSTARGET_H
