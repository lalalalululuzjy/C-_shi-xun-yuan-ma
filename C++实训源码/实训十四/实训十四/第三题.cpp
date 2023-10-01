#include <iostream>
#include <string>
using namespace std;

// 定义学生结构体
struct Student {
    int id;         // 学号
    string name;    // 姓名
    double english; // 英语成绩
    double math;    // 数学成绩
    double physics; // 物理成绩
};

int main3() {
    const int a = 10;
    Student stu[a];

    // 输入学生数据
    for (int i = 0; i < a; ++i) {
        cout << "请输入第 " << i + 1 << " 个学生的学号: ";
        cin >> stu[i].id;
        cout << "请输入第 " << i + 1 << " 个学生的姓名: ";
        cin >> stu[i].name;
        cout << "请输入第 " << i + 1 << " 个学生的英语成绩: ";
        cin >> stu[i].english;
        cout << "请输入第 " << i + 1 << " 个学生的数学成绩: ";
        cin >> stu[i].math;
        cout << "请输入第 " << i + 1 << " 个学生的物理成绩: ";
        cin >> stu[i].physics;
    }

    // 计算3门课程的总平均成绩
    double e = 0, m = 0, p = 0;
    for (int i = 0; i < a; ++i) {
        e += stu[i].english;
        m += stu[i].math;
        p += stu[i].physics;
    }
    double E = e / a;
    double M = m / a;
    double P = p / a;

    // 找出最高分的学生
    double max = (stu[0].english + stu[0].math + stu[0].physics) / 3;
    int b = 0;
    for (int i = 1; i < a; ++i) {
        double aver = (stu[i].english + stu[i].math + stu[i].physics) / 3;
        if (aver > max) {
            max = aver;
            b = i;
        }
    }

    // 输出结果
    cout << "3门课程的总平均成绩：" << endl;
    cout << "英语: " << E << endl;
    cout << "数学: " << M << endl;
    cout << "物理: " << P << endl;

    cout << "最高分学生的信息：" << endl;
    cout << "学号: " << stu[b].id << endl;
    cout << "姓名: " << stu[b].name << endl;
    cout << "平均成绩: " << max << endl;

    system("pause");

    return 0;
}