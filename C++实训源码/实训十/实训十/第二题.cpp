#include <iostream>
using namespace std;

int main2() {
    const int size = 10; // 数组大小
    int num[size]; // 定义整型数组

    // 输入10个整数
    cout << "请输入" << size << "个整数：" << endl;
    for (int i = 0; i < size; i++) {
        cout << "请输入第" << i + 1 << "个整数：";
        cin >> num[i];
    }

    // 输出数组元素
    cout << "输入的数组元素为：" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    // 反序存储并输出
    cout << "反序存储并输出数组元素：" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}