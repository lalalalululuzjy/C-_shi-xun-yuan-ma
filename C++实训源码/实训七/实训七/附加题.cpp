#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // 使用当前时间作为随机数种子

    int num; // 题目数量
    int min;    // 数字范围的最小值
    int max;    // 数字范围的最大值
    int score = 0;   // 用户得分

    cout << "欢迎使用数学计算练习系统!" << endl;

    // 获取用户输入题目数量和数字范围
    cout << "请输入题目数量: ";
    cin >> num;

    cout << "请输入数字范围的最小值: ";
    cin >> min;

    cout << "请输入数字范围的最大值: ";
    cin >> max;

    // 生成并回答题目
    for (int i = 1; i <= num; i++) {
        int num1 = rand() % (max - min + 1) + min;
        int num2 = rand() % (max - min + 1) + min;
        int zjy = num1 + num2;
        int ZJY;

        cout << "问题 #" << i << ": " << num1 << " + " << num2 << " = ";
        cin >> ZJY;

        if (ZJY == zjy) {
            cout << "回答正确!" << endl;
            score++;
        }
        else {
            cout << "回答错误。正确答案是 " << zjy << endl;
        }
    }

    // 输出成绩
    cout << "练习结束，你的得分是: " << score << "/" << num << endl;

    return 0;
}