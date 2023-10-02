#include <iostream>
using namespace std;

int main3() {
    int a[3][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };

    bool zjy = false;
    int b, c;

    // 找出鞍点（如果存在）
    for (int i = 0; i < 3; i++) {
        int d = a[i][0];
        int e = 0;

        // 找出当前行的最小值
        for (int j = 1; j < 3; j++) {
            if (a[i][j] < d) {
                d = a[i][j];
            }
        }

        // 找出当前列的最大值的列索引
        for (int j = 1; j < 3; j++) {
            if (a[j][i] > a[e][i]) {
                e = j;
            }
        }

        // 判断是否为鞍点
        if (d == a[i][e]) {
            zjy = true;
            b = i;
            c = e;
            break;
        }
    }

    // 输出结果
    if (zjy) {
        cout << "鞍点存在，位置为：" << "(" << b << ", " << c << ")" << endl;
    } else {
        cout << "鞍点不存在。" << endl;
    }

    system("pause");

    return 0;
}