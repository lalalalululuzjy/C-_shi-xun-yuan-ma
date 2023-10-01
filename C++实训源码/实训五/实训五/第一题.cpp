#include<iostream>
#include<iomanip>
using namespace std;

int main1() {

	double sum = 0.0;

	for (int i = 1; i <= 10; i++) {
		sum += 1.0 / i;
	}

	cout << fixed << setprecision(6) << sum << endl;

	system("pause");

	return 0;
}
