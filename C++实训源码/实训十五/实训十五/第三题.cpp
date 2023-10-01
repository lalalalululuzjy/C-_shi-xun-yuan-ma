#include <iostream>
using namespace std;

class RectangularBox {
private:
    double length;
    double width;
    double height;

public:
    // 构造函数，用于初始化长方体的属性
    RectangularBox() {
        length = 0.0;
        width = 0.0;
        height = 0.0;
    }

    // 设置长方体的长、宽、高
    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // 计算长方体的体积
    double calculateVolume() {
        return length * width * height;
    }
};

int main3() {
    RectangularBox box1, box2, box3;
    double length, width, height;

    // 输入第一个长方体的长、宽、高
    cout << "请输入第一个长方体的长、宽、高: " << endl;
    cin >> length >> width >> height;
    box1.setDimensions(length, width, height);

    // 输入第二个长方体的长、宽、高
    cout << "请输入第二个长方体的长、宽、高: " << endl;
    cin >> length >> width >> height;
    box2.setDimensions(length, width, height);

    // 输入第三个长方体的长、宽、高
    cout << "请输入第三个长方体的长、宽、高: " << endl;
    cin >> length >> width >> height;
    box3.setDimensions(length, width, height);

    // 计算并输出三个长方体的体积
    cout << "第一个长方体的体积为: " << box1.calculateVolume() << endl;
    cout << "第二个长方体的体积为: " << box2.calculateVolume() << endl;
    cout << "第三个长方体的体积为: " << box3.calculateVolume() << endl;

    system("pause");

    return 0;
}