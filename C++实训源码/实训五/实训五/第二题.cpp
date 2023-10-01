#include<iostream>
using namespace std;

int main2() {

    const int N = 5;
    int a = 1;

    for (int i = 1; i <= N; i++) {
        a *= i;
    }

    cout << "NµÄ½×³Ë N!£¨N=" << N << "£©µÈÓÚ " << a << endl;

    system("pause");

    return 0;
}
