#include <iostream>
using namespace std;

int main1() {
	int a = 3, b = 4, c = 1;
	int x = 4, y = 5, i;

	// (1) a + b > c && b == c
	bool result1 = (a + b > c) && (b == c);

	// (2) a || b + c && b - c
	bool result2 = (a || (b + c)) && (b - c);

	// (3) b == a + 1 && (a != b - 1) && --c
	bool result3 = (b == a + 1) && (a != b - 1) && (--c);

	// (4) !(a + b) + c - 1 && b + c / 2
	bool result4 = (!(a + b) + c - 1) && (b + c / 2);

	cout << "(1) 的结果: " << result1 << endl;
	cout << "(2) 的结果: " << result2 << endl;
	cout << "(3) 的结果: " << result3 << endl;
	cout << "(4) 的结果: " << result4 << endl;

	// 重新初始化变量
	x = 4;
	y = 5;

	// (1) cout<<(i=++x==5||++y==6)<<" "<<x<<" "<<y<<endl;
	i = (++x == 5 || ++y == 6);
	cout << "(1) 的结果: " << i << " " << x << " " << y << endl;

	// 重新初始化变量
	x = 4;
	y = 5;

	// (2) cout<<(i=++x==5&&y++==6)<<" "<<x<<" "<<y;
	i = (++x == 5 && y++ == 6);
	cout << "(2) 的结果: " << i << " " << x << " " << y << endl;

	system("pause");

	return 0;
}