#include <iostream>
using namespace std;

// 定义输出社会主义核心价值观的函数
void print() {
    cout << "富强   民主   文明   和谐" << endl;
    cout << "自由   平等   公正   法治" << endl;
    cout << "爱国   敬业   诚信   友善" << endl;
}

// 定义输出星号分割线的函数
void print_star() {
    cout << "**********************" << endl;
}

int main1() {
    // 输出三次社会主义核心价值观，每一次输出中间使用星号分割
    for (int i = 0; i < 3; i++) {
        print_star();
        print();
        print_star();
    }

    system("pause");

    return 0;
}