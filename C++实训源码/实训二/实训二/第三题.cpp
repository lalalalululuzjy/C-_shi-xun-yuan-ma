#include <iostream>
using namespace std;

int main3() {
    int zjy;
    cout << "请输入需要找零的金额（不超过100元）：";
    cin >> zjy;

    if (zjy <= 0 || zjy > 100) {
        cout << "输入金额无效，请输入一个有效的金额（1到100之间）。\n";
        return 1;
    }

    int wushi = 0, ershi = 0, shi = 0, wu = 0, yi = 0;

    while (zjy >= 50) {
        zjy -= 50;
        wushi++;
    }

    while (zjy >= 20) {
        zjy -= 20;
        ershi++;
    }

    while (zjy >= 10) {
        zjy -= 10;
        shi++;
    }

    while (zjy >= 5) {
        zjy -= 5;
        wu++;
    }

    yi = zjy;

    cout << "50元纸币：" << wushi << " 张\n";
    cout << "20元纸币：" << ershi << " 张\n";
    cout << "10元纸币：" << shi << " 张\n";
    cout << "5元纸币：" << wu << " 张\n";
    cout << "1元纸币：" << yi << " 张\n";

    system("pause");

    return 0;
}