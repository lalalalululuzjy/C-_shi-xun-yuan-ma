#include <iostream>
using namespace std;

int main2() {
    int zjy = 11;

    for (int i = 1; i <= zjy; i++) {
        for (int j = 1; j <= zjy - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    system("pause");

    return 0;
}