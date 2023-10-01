#include <iostream>
#include <string>
using namespace std;

int main2() {
    string a;
    cout << "请输入一个由小写字母组成的字符串：";
    cin >> a;

    for (int i = 0; i < a.length(); i++) {
        char b = toupper(a[i]);
        cout << b;
    }

    cout << endl;

    return 0;
}