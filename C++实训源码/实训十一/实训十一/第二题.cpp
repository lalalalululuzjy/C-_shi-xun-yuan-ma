#include <iostream>
using namespace std;

int main2() {
    int zjy[2][3] = { {1, 2, 3},
                         {4, 5, 6} };

    int ZJY[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            ZJY[j][i] = zjy[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << ZJY[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");

    return 0;
}