#include <iostream>
using namespace std;

void main4() {
	char ch;
	int num = 2, right = 0;
	cout << "/t党史知识选择题电子答题系统/n";
	cout << "1、中国共产党成立时间( ) \nA. 1920 B.1921 C.1922 D.1949∖n";
	cout << "请输入答案:";
	cin >> ch;


	if (ch == 'B' || ch == 'b')
	{
		right++;
	}
	cout << "2、中国共产党宗旨是（）\nA.全心全意为人民服务 B.实现共产主义 C.实现社会主义现代化 D.和平发展";
	cout << "请输入答案:";
	cin >> ch;

	if (ch == 'A' || ch == 'a')
	{
		right++;
	}

	cout << "得分为:" << right * 100 / num << endl;
}
