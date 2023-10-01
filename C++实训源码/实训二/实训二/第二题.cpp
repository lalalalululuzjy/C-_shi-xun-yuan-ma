#include <iostream>
#include <cmath>
using namespace std;

int main2() {
    while (1) {
        double x, y;

        cout << "请输入x的值：";
        cin >> x;

        double zjy = sin(x * x);
        double ZJY = 1 - cos(x);

        if (fabs(ZJY) <= 1e-8) {
            cout << "函数在x处的值不存在。" << endl;
        }
        else {
            y = zjy / ZJY;

            cout << "函数在x处的值为：" << y << endl;
        }
    }

    system("pause");

    return 0;
}