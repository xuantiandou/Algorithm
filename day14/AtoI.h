//
// Created by xiaodou on 2022/11/7.
//字符串转为Int
//

#ifndef ALGORITHM_ATOI_H
#define ALGORITHM_ATOI_H

#include <sstream>
#include "../CommonHeader.h"

class AtoI {
public:
    static void aToI() {
        string s="43242321334";

        stringstream liu(s);

        int n = 0;

        liu >> n;

        PRINT(n)
    }
};


#endif //ALGORITHM_ATOI_H
