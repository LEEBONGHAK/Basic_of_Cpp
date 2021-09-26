#include <iostream>

bool isEqual(int a, int b) {

	bool result = (a == b);		// 같으면 true, 다르면 false
	return result;
}

using namespace std;

int main()
{
	/*
		Boolean Type

		- true(1) or false(0)
	*/

	bool b1 = true;		// copy initialization
	bool b2(false);		// direct initialization
	bool b3{ true };	// uniform initialization

	// std::boolalpha => boolean type이 true or false로 출력 시키기 위해
	cout << std::boolalpha;
	cout << b3 << endl;
	cout << b1 << endl;
	printf("\n");

	// not operator
	cout << !b1 << endl;
	cout << !b2 << endl;
	printf("\n");

	// logical operator(and)
	cout << (true && true) << endl;		// true
	cout << (true && false) << endl;	// flase
	cout << (false && true) << endl;	// flase
	cout << (false && false) << endl;	// flase
	printf("\n");

	// logical operator(or)
	cout << (true || true) << endl;		// true
	cout << (true || false) << endl;	// true
	cout << (false || true) << endl;	// true
	cout << (false || false) << endl;	// flase
	printf("\n");

	// std::noboolalpha => boolean type이 1(true) or 0(false)으로 출력 시키기 위해
	cout << std::noboolalpha;

	// if 문
	if (true) {
		cout << "This is true\n";
	}

	if (false) {
		cout << "This is true\n";
	}
	printf("\n");

	// if-else 문
	if (true) {
		cout << "This is true\n";
	}
	else {
		cout << "This is false\n";
	}

	if (false) {
		cout << "This is true\n";
	}
	else {
		cout << "This is false\n";
	}
	printf("\n");

	cout << isEqual(1, 1) << endl;		// true
	cout << isEqual(1, 2) << endl;		// false
	printf("\n");

	// 0이 아닌 값은 모두 true로 판단됨
	if (5) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	printf("\n");

	bool c;
	cin >> c;	// boolean type은 입력 받을 때 1 또는 0으로 입력해야 한다.
	cout << "Your input : " << c << endl;
	printf("\n");

	// example : decision odd and even
	int a;
	cin >> a;
	if (a % 2) {
		cout << a << " is odd\n";
	}
	else {
		cout << a << " is even\n";
	}

	return 0;
}