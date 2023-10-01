#include <iostream>
using namespace std;

int main1() {
    const int size = 10; // 数组大小
    int scores[size]; // 定义整型数组
    int highest = 0; // 最高分初始化为0
    int lowest = 100; // 最低分初始化为100
    double sum = 0.0; // 分数总和初始化为0.0

    cout << "请输入10个分数：" << endl;

    // 输入10个分数
    for (int i = 0; i < size; i++) {
        cout << "请输入第 " << i + 1 << " 个分数：";
        cin >> scores[i];

        // 更新最高分和最低分
        if (scores[i] > highest) {
            highest = scores[i];
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
        }

        sum += scores[i]; // 累加分数
    }

    double average = sum / size; // 直接执行浮点数除法

    cout << "最高分: " << highest << endl;
    cout << "最低分: " << lowest << endl;
    cout << "平均分: " << average << endl;

    return 0;
}