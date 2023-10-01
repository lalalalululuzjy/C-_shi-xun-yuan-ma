#include <iostream>
using namespace std;

int main() {
    cout << "100到200之间的素数有：" << endl;

    for (int num = 100; num <= 200; num++) {
        bool zjy = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                zjy = false;
                break;
            }
        }

        if (zjy) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}