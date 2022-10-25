//
// Created by xiaodou on 2022/10/25.
//给定k值旋转数组
//

#ifndef ALGORITHM_ROTATEARRAY_H
#define ALGORITHM_ROTATEARRAY_H

#include <vector>

using namespace std;

class RotateArray {

public:

    //时间复杂度 O(n)  空间复杂度 O(n)
    static void rotateArray() {
        vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

        int k = 9;  // 7 8 1 2 3 4 5 6

        //第 i的位置 变成  (i+2) mod size

        vector<int> v2(v.size());

        for (int i = 0; i < v.size(); ++i) {
            v2[(i + k) % v.size()] = v[i];
        }


        for (int i = 0; i < v2.size(); ++i) {
            cout << v2[i] << endl;
        }

    }


    //数组翻转
    // 空间复杂度 O1 时间复杂度 2n 也就是 On
    static void rotateArray2() {
        vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

        int k = 11;  // 7 8 1 2 3 4 5 6

        //1、将数据整体翻转 8 7 6 5 4 3 2 1
        //2、翻转 k 个 mod size 从0 - k mod size     7 8 6 5 4 3 2 1
        //3、翻转 从 k mod size -  size -1

        reverse(v, 0, v.size() - 1);
        reverse(v, 0, (k % v.size()) - 1);
        reverse(v, k % v.size(), v.size() - 1);

        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << endl;
        }

    }


private:
    static void reverse(vector<int> &v, int start, int end) {
        while (start < end) {
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }

};


#endif //ALGORITHM_ROTATEARRAY_H
