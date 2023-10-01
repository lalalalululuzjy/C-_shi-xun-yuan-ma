#include <iostream>
#include <iomanip> 
using namespace std;

int main2() {
    double r = 0.0, h = 0.0;

    cout << "请输入圆的半径（r）：";
    cin >> r;

    cout << "请输入圆柱的高（h）：";
    cin >> h;

    // 计算圆的周长
    double zhouchang = 2 * 3.14159 * r;

    // 计算圆的面积
    double mianji = 3.14159 * r * r;

    // 计算圆球的表面积
    double biaomianji = 4 * 3.14159 * r * r;

    // 计算圆球的体积
    double qiutiji = (4.0 / 3.0) * 3.14159 * r * r * r;

    // 计算圆柱的体积
    double zhutiji = mianji * h;

    cout << fixed << setprecision(2);

    cout << "圆的周长为：" << zhouchang << endl;
    cout << "圆的面积为：" << mianji << endl;
    cout << "圆球的表面积为：" << biaomianji << endl;
    cout << "圆球的体积为：" << qiutiji << endl;
    cout << "圆柱的体积为：" << zhutiji << endl;

    system("pause");

    return 0;
}