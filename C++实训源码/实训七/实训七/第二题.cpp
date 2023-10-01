#include <iostream>
using namespace std;

int main2() {
    int numPeaches = 1; // 第10天剩下的桃子数

    // 从第9天倒推到第1天
    for (int day = 9; day >= 1; day--) {
        numPeaches = 2 * (numPeaches + 1);
    }

    cout << "第一天共摘了 " << numPeaches << " 个桃子" << endl;

    system("pause");

    return 0;
}