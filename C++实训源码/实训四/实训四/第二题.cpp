#include<iostream>
using namespace std;

int main2() {
    while (1) {
        int n;
        cout << "ÇëÊäÈëÄê·Ý" << endl;
        cin >> n;
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    system("pause");

    return 0;
}