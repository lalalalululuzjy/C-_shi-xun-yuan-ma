#include <iostream>
using namespace std;

int main() {
    int nums[6]; // 数列数组
    cout << "请输入" << 6 << "个数列元素：" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> nums[i];
    }

    int target; // 要查找的数
    cout << "请输入要查找的数：";
    cin >> target;

    // 顺序查找
    bool found = false;
    int position = -1;
    for (int i = 0; i < 6; i++) {
        if (nums[i] == target) {
            found = true;
            position = i + 1;
            break;
        }
    }

    // 输出查找结果
    if (found) {
        cout << target << " 在数组中的位置为第" << position <<"位！" << endl;
    }
    else {
        cout << "不存在数列中。" << endl;
    }

    system("pause");

    return 0;
}