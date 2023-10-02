#include <iostream>
#include <string>
using namespace std;

int main3() {
    int n;
    cout << "请输入字符串的个数：";
    cin >> n;

    cin.ignore(); // 忽略前面的回车符

    cout << "请输入 " << n << " 个字符串：" << endl;

    for (int i = 0; i < n; i++) {
        string a;
        getline(cin, a); // 读取一行输入

        if (!a.empty() && a[0] == 'A') {
            cout << a << endl;
        }
    }

    return 0;
}