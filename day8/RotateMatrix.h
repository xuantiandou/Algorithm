//
// Created by xiaodou on 2022/10/31.

//矩阵旋转90度
//

#ifndef ALGORITHM_ROTATEMATRIX_H
#define ALGORITHM_ROTATEMATRIX_H

#include "../CommonHeader.h"

class RotateMatrix {

public:
    static void rotateMatrix() {

        vector<vector<int>> matrix = {{5,  1,  9,  11},
                                      {2,  4,  8,  10},
                                      {13, 3,  6,  7},
                                      {15, 14, 12, 16}};

        int n = matrix.size();

        //上下交换
        for (int i = 0; i < n / 2; ++i) {
            for (int j = 0; j < n; ++j) {
                swap(matrix[i][j], matrix[n - i - 1][j]);
            }
        }

        //对角线交换
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }

        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                PRINT(matrix[i][j])
            }
        }
    }


};


#endif //ALGORITHM_ROTATEMATRIX_H
