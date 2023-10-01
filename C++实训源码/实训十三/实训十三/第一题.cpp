#include<iostream>
using namespace std;

int main1() {
	int arr[10];

	cout << "请输入 10 个整数：" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "第 " << i + 1 << " 个数：";
		cin >> arr[i];
	}

	cout << "排序前：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//开始冒泡排序
	//总共排序轮数为：元素个数减1
	int a = sizeof(arr) / sizeof(arr[0]);//元素个数
	for (int i = 0; i < a - 1; i++)
	{
		//内层循环对比 次数 = 元素个数 - 当前的轮数 - 1
		for (int j = 0; j < a - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//排序后结果
	cout << "排序后:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}