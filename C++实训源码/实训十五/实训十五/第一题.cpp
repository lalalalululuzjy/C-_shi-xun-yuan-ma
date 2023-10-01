#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // 构造函数
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }

    // 获取小时
    int getHour() const {
        return hour;
    }

    // 获取分钟
    int getMinute() const {
        return minute;
    }

    // 获取秒数
    int getSecond() const {
        return second;
    }

    // 设置时间
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // 显示时间
    void displayTime() const {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main1() {
    Time t(22, 01, 32);
    t.displayTime();

    system("pause");

    return 0;
}