#include <iostream>
using namespace std;

int fibonaqi(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibonaqi(n - 1) + fibonaqi(n - 2);
    }
}

int main2() {
    const int a = 30;
    const int b = 6;

    cout << "斐波那契数列前 " << a << " 个数为：" << endl;

    for (int i = 1; i <= a; i++) {
        cout << fibonaqi(i) << " ";

        if (i % b == 0) {
            cout << endl;
        }
    }

    system("pause");

    return 0;
}