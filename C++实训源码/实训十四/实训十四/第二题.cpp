#include <iostream>
using namespace std;

// 枚举类型 weekday
enum weekday {
    Sun,     // 星期日
    Mon,     // 星期一
    Tue,     // 星期二
    Wed,     // 星期三
    Thu,     // 星期四
    Fri,     // 星期五
    Sat      // 星期六
};

int main2() {
    // 定义并赋值 workday 变量
    weekday workday = Mon;

    // 输出 workday 的值
    cout << "workday 的值为: " << workday << endl;

    system("pause");

    return 0;
}