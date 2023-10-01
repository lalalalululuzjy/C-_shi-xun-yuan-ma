#include <iostream>
using namespace std;

int main3() {
    while (1) {
        char zjy;

        cout << "请输入一个字符: ";
        cin >> zjy;

        if (zjy >= 'A' && zjy <= 'Z') {
            char a = zjy + ('a' - 'A');
            cout << "转换后的字符为: " << a << endl;
        }
        else if (zjy >= 'a' && zjy <= 'z') {
            char b = zjy - ('a' - 'A');
            cout << "转换后的字符为: " << b << endl;
        }
        else {
            cout << "您输入的不是大小写字符" << endl;
        }
    }

    system("pause");

    return 0;
}