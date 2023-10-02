#include <iostream>
using namespace std;

// 定义日期结构体
struct date {
    int year;
    int month;
    int day;
};

// 判断是否为闰年
bool runnian(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算该日在本年中是第几天
int dayyear(const date& date) {
    int daymonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int daycount = date.day;

    for (int i = 1; i < date.month; ++i) {
        daycount += daymonth[i];
        if (i == 2 && runnian(date.year))
            daycount++;  // February in a leap year
    }

    return daycount;
}

int main4() {
    date date;

    cout << "请输入年: ";
    cin >> date.year;

    cout << "请输入月: ";
    cin >> date.month;

    cout << "请输入日: ";
    cin >> date.day;

    int dayCount = dayyear(date);
    cout << "该日在本年中是第 " << dayCount << " 天" << endl;

    system("pause");

    return 0;
}