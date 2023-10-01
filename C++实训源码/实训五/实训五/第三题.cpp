#include<iostream>
using namespace std;

int main3() {
    const int months = 18;
    int month1 = 1;
    int month2 = 1;

    for (int i = 3; i <= months; i++) {
        int new_rabbits = month1 + month2;
        month1 = month2;
        month2 = new_rabbits;
    }

    cout << "第" << months << "个月的兔子总数为：" << month2 << " 对" << endl;

    system("pause");

    return 0;
}
