#include<iostream>
using namespace std;

int main1() {

	int num = 100;

	while (num < 1000)
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	}

	system("pause");

	return 0;
}