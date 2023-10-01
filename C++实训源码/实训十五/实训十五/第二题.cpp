#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    string gender;

public:
    void setData(int id, string sname, string sgender) {
        studentID = id;
        name = sname;
        gender = sgender;
    }

    void display() {
        cout << "学号: " << studentID << endl;
        cout << "姓名: " << name << endl;
        cout << "性别: " << gender << endl;
    }
};

int main2() {
    Student stuOne;

    int id;
    string name, gender;

    cout << "请输入学生的学号: ";
    cin >> id;
    cout << "请输入学生的姓名: ";
    cin >> name;
    cout << "请输入学生的性别: ";
    cin >> gender;

    stuOne.setData(id, name, gender);
    stuOne.display();

    system("pause");

    return 0;
}