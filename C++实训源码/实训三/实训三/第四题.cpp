#include <iostream>
using namespace std;

int main4() {
	int zjy;
	cout << "请输入一个3位的正整数：";
	cin >> zjy;

	if (zjy >= 100 && zjy <= 999) {
		int baiwei = zjy / 100;
		int shiwei = (zjy / 10) % 10;
		int gewei = zjy % 10;

		cout << "百位数字：" << baiwei << endl;
		cout << "十位数字：" << shiwei << endl;
		cout << "个位数字：" << gewei << endl;

		cout << "逆序输出：" << gewei << shiwei << baiwei << endl;
	}
	else {
		cout << "输入不是3位的正整数。" << endl;
	}

	system("pause");

	return 0;
}