#include <iostream>
#include <iomanip>	// setprecision()
#include <cmath>	// abs()

#define endl '\n';

using namespace std;

int main()
{
	/* 
		relational operators

		- <
		- >
		- >=
		- <=
		- ==
		- !=
	*/
	int x, y;
	cin >> x >> y;
	cout << "Your input values are : " << x << " " << y << endl;

	if (x == y) 
		cout << "equal" << endl;
	if (x != y)
		cout << "Not equal" << endl;
	if (x > y)
		cout << "x is greater than y" << endl;
	if (x < y)
		cout << "x is less than y" << endl;
	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;
	if (x <= y)
		cout << "x is less than y or equal to y" << endl;
	printf("\n");

	// 주의 사항 (부동 소수점)
	double d1(100 - 99.99);		// 0.001
	double d2(10 - 9.99);		// 0.001

	cout << abs(d1 - d2) << endl;

	cout << setprecision(20);
	cout << d1 << endl;
	cout << d2 << endl;

	if (d1 == d2) {
		cout << "equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
		if (d1 > d2) {
			cout << "d1 > d2" << endl;
		}
		else {
			cout << "d1 < d2" << endl;
		}
	}
	printf("\n");

	// 오차의 한계를 정의하여 해결
	const double epsilon = 1e-10;
	if (abs(d1 - d2) < epsilon) {
		cout << "Approximately equal" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}

	return 0;
}