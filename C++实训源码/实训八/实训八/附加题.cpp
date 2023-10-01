#include <iostream>
using namespace std;

// 计算两个整数的最大公约数
int max(int a, int b) {
    if (b == 0) {
        return a;
    }
    return max(b, a % b);
}

// 计算两个整数的最小公倍数
int min(int a, int b) {
    return (a * b) / max(a, b);
}

int main4() {
    while (1) {
        int num1, num2;

        cout << "请输入两个整数: " << endl;
        cin >> num1 >> num2;

        int zjy = max(num1, num2);
        int ZJY = min(num1, num2);

        cout << "最大公约数是: " << zjy << endl;
        cout << "最小公倍数是: " << ZJY << endl;
    }
    system("pause");

    return 0;
}