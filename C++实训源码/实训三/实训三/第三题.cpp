#include <iostream>
using namespace std;

int main3() {
    while (1) {
        char ZJY, zjy;

        cout << "请输入一个大写字母：";
        cin >> ZJY;

        // 检查输入是否为大写字母
        if (ZJY >= 'A' && ZJY <= 'Z') {
            // 转换为小写
            zjy = ZJY + 32;
            cout << "对应的小写字母为：" << zjy << endl;
        }
        else {
            cout << "您输入的不是大写字母。" << endl;
        }
    }
    return 0;
}