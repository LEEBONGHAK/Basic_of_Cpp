#include <iostream>

#define endl '\n'

using namespace std;

int main()
{
	bool x = true;
	bool y = false;

	/* logical NOT ! */
	cout << !x << endl;		// false
	cout << !y << endl;		// true
	printf("\n");

	/* logical AND && */
	cout << (true && true) << endl;		// true
	cout << (false && true) << endl;	// false
	cout << (true && false) << endl;	// false
	cout << (false && false) << endl;	// false
	printf("\n");

	/* logical OR || */
	cout << (true || true) << endl;		// true
	cout << (true || false) << endl;	// true
	cout << (false || true) << endl;	// true
	cout << (false || false) << endl;	// false
	printf("\n");


	// De Morgan's Law (logical operator는 분배법칙이 적용되지 않음
	/*
		아래 경우에서
		!(x && y) = !x || !y
	*/
	cout << !(x && y) << endl;
	cout << (!x && !y) << endl;
	cout << (!x || !y) << endl;
	printf("\n");

	/* 
		logical XOR - cpp에서는 XOR operator는 없음 

		true  true  false
		true  false  true
		false  true  true
		false  false  false
	*/
	// 대체 사용 가능
	cout << (true != true) << endl;		// false
	cout << (true != false) << endl;	// true
	cout << (false != true) << endl;	// true
	cout << (false != false) << endl;	// false
	printf("\n");

	/*
		logical operator의 우선순위
	
		- && > ||
	*/
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	// r1 == r2 != r3
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;

	return 0;
}