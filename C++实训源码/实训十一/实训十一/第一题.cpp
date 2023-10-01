#include <iostream>
using namespace std;

int main1() {
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum1 = 0; // 正对角线上元素之和
    int sum2 = 0; // 反对角线上元素之和

    // 计算正对角线和反对角线上的元素之和
    for (int i = 0; i < 3; i++) {
        sum1 += a[i][i]; // 正对角线元素之和
        sum2 += a[i][2 - i]; // 反对角线元素之和
    }

    // 输出结果
    cout << "正对角线上元素之和: " << sum1 << endl;
    cout << "反对角线上元素之和: " << sum2 << endl;

    system("pause");

    return 0;
}