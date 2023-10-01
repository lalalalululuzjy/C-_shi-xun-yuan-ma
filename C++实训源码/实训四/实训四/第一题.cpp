#include<iostream>
using namespace std;

int main1()
{
	while (1) {
		int n;
		cout << "输入学生的成绩:\n";
		cin >> n;
		if (n < 0 || n>100) {
			cout << "输入的数据非法!\n";
		}
		else {
			if (n > 90) {
				cout << "该同学的等级为:A";
			}
			if (n >= 80 && n <= 90) {
				cout << "该同学的等级为:B";
			}
			if (n >= 70 && n <= 79) {
				cout << "该同学的等级为:C";
			}
			if (n >= 60 && n <= 69) {
				cout << "该同学的等级为:D";
			}
			if (n >= 0 && n <= 59) {
				cout << "该同学的等级为:E";
			}
		}
		cout << endl;
	}
	system("pause");

	return 0;
}