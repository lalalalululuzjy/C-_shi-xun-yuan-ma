#include<iostream>
using namespace std;
#include<ctime>

int main2() {

	//添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //rand()%100 + 1 ，生成0 + 1 ` 99 + 1的随机数

	string username;
	cout << "请输入您的用户名: ";
	cin >> username;

	int attempts = 0;
	int guess;

	cout << "游戏开始！您有10次猜测的机会。" << endl;

	while (attempts < 10) {
		cout << "请输入您的猜测 (1-100)：";
		cin >> guess;
		attempts++;

		if (guess < num) {
			cout << "猜小了！" << endl;
		}
		else if (guess > num) {
			cout << "猜大了！" << endl;
		}
		else {
			cout << "恭喜，您猜对了！" << endl;
			break;
		}

		if (attempts == 10) {
			cout << "很遗憾，您用尽了所有机会。正确答案是 " << num << "。" << endl;
		}
	}

	cout << "游戏结束，感谢参与，" << username << "！" << endl;

	system("pause");

	return 0;
}
