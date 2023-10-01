#include <iostream>
using namespace std;

bool zjy(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main3() {
    int num;

    cout << "请输入一个正整数: ";
    cin >> num;

    if (zjy(num)) {
        cout << num << " 是素数" << endl;
    }
    else {
        cout << num << " 不是素数" << endl;
    }

    system("pause");

    return 0;
}