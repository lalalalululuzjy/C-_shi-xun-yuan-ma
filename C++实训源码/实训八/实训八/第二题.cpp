#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    int max = a;  // 假设第一个数最大

    // 比较第二个数和第一个数的大小
    if (b > max) {
        max = b;
    }

    // 比较第三个数和当前最大数的大小
    if (c > max) {
        max = c;
    }

    return max;
}

int main2() {
    int a, b, c;

    cout << "请输入三个数: "<<endl;
    cin >> a >> b >> c;

    int zjy = max(a, b, c);
    cout << "最大的数是: " << zjy << endl;

    system("pause");

    return 0;
}