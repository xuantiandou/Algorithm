//
// Created by xiaodou on 2022/10/28.
//

#ifndef ALGORITHM_PLUSONE_H
#define ALGORITHM_PLUSONE_H


class PlusOne {

public:
    static void plusOne() {
        vector<int> data = {9, 9, 9, 9, 9};


        int len = data.size();
        bool ok = false;
        for (int j = 0; j < len; ++j) {
            data[len - j - 1] = (data[len - j - 1] + 1) % 10;

            if (data[len - j - 1] % 10 != 0) {
                ok = true;
                for (int i = 0; i < len; ++i) {
                    cout << data[i] << endl;
                }
                break;
            }
        }

        if (!ok) {
            //到这里来了说明所有的元素都是9
            vector<int> data2(len + 1);
            data2[0] = 1;
            for (int i = 0; i < data2.size(); ++i) {
                cout << data2[i] << endl;
            }
        }


    }

};


#endif //ALGORITHM_PLUSONE_H
