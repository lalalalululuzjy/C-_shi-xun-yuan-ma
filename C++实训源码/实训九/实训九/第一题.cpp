#include <iostream>
using namespace std;

unsigned long long zjy(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * zjy(n - 1);
    }
}

int main1() {
    int num;

    cout << "请输入一个非负整数: ";
    cin >> num;

    if (num < 0) {
        cout << "输入应为非负整数" << endl;
    } else {
        unsigned long long result = zjy(num);
        cout << "阶乘 " << num << "! = " << result << endl;
    }

    system("pause");

    return 0;
}