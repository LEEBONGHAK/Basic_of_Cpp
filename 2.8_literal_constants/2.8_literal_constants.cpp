#include <iostream>

using namespace std;

int main()
{
	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 012;	// Octal
	cout << "Octal 012 is " << x << endl;	// 10

	int y = 0xF;	// Hexa
	cout << "Hexa 0xF is " << y << endl;	// 15

	// 2진수를 사용해야하는 경우 8진수나 16진수로 전환해 사용하는 경우가 많음

	int c = 0b1010;	// Binary
	cout << "Binary 0b1010 is " << c << endl;	// 10
	c = 0b1011'111'1010;	// 사람들이 읽기 쉽게 하기 위해 이렇게 하는 것을 가능
	cout << "Binary 0b10111111010 is " << c << endl;

	return 0;
}
