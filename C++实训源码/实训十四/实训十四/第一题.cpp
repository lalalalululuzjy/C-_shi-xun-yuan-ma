#include <iostream>
#include <string>
using namespace std;

// 声明结构体类型 Student
struct Student {
    int num;        // 学号
    string name;    // 姓名
    char sex;       // 性别（'M'表示男，'F'表示女）
    int age;        // 年龄
    double score;   // 成绩
    string addr;    // 家庭所在地
};

int main1() {
    // 创建一个 Student 结构体变量并初始化
    Student student1;
    student1.num = 131;            // 学号
    student1.name = "Zjy";       // 姓名
    student1.sex = 'M';            // 性别
    student1.age = 19;             // 年龄
    student1.score = 0;        // 成绩
    student1.addr = "PingYao";    // 家庭所在地

    // 输出学生信息
    cout << "学号: " << student1.num << endl;
    cout << "姓名: " << student1.name << endl;
    cout << "性别: " << student1.sex << endl;
    cout << "年龄: " << student1.age << endl;
    cout << "成绩: " << student1.score << endl;
    cout << "家庭所在地: " << student1.addr << endl;

    system("pause");

    return 0;
}