#include <iostream>
using namespace std;

void moveDisk(int n, char source, char dest, char spare) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << dest << endl;
        return;
    }

    moveDisk(n - 1, source, spare, dest);
    cout << "Move disk " << n << " from " << source << " to " << dest << endl;
    moveDisk(n - 1, spare, dest, source);
}

void hanoi(int numDisks, char source, char dest, char spare) {
    cout << "Tower of Hanoi for " << numDisks << " disks:" << endl;
    moveDisk(numDisks, source, dest, spare);
}

int main3() {
    int numDisks = 3; // 定义圆盘的数量
    char source = 'A'; // 初始柱子
    char dest = 'C'; // 目标柱子
    char spare = 'B'; // 中间柱子

    hanoi(numDisks, source, dest, spare);

    system("pause");

    return 0;
}