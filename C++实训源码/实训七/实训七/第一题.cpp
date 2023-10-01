#include <iostream>
using namespace std;

int main1() {
    cout << "百以内满足条件的数有：" << endl;

    for (int num = 1; num <= 100; num++) {
        if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7) {
            continue;
        }

        cout << num << " ";
    }

    cout << endl;

    system("pause");

    return 0;
}