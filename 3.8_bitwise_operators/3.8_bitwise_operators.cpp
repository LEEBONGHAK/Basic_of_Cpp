#include <iostream>
#include <bitset>	// bitset<bit size>(variables)

#define endl '\n'

using namespace std;

int main() {
	/*
		Bitwise Operators (빠르게 처리 가능)

		<< : left shift
		>> : right shift
		~ : bitwise NOT
		& : bitwise AND
		| : bitwise OR
		^ : bitwise XOR
	*/

	// bitwise 연산을 할때는 unsigned를 주로 사용
	unsigned int a = 1;
	cout << bitset<4>(a) << endl;	// 0001
	a = 2;
	cout << bitset<4>(a) << endl;	// 0010
	cout << endl;

	// left shift
	a = 3;
	unsigned b = a << 1;
	cout << bitset<4>(a) << " " << a << endl;	// 0011
	cout << bitset<4>(b) << " " << b << endl;	// 0110
	b = b << 1;
	cout << bitset<4>(b) << " " << b << endl;	// 1100
	cout << endl;

	// right shift
	a = 1024;
	cout << bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	cout << bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	cout << bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	cout << bitset<16>(a >> 4) << " " << (a >> 4) << endl;
	cout << endl;

	// bitwise NOT
	a = 1024;
	cout << bitset<16>(~a) << " " << (~a) << endl;
	cout << endl;

	// bitwise AND, OR, XOR
	a = 0b1100;
	b = 0b0110;
	cout << bitset<4>(a & b) << endl;		// bitwise AND
	cout << bitset<4>(a | b) << endl;		// bitwise OR
	cout << bitset<4>(a ^ b) << endl;		// bitwise XOR

	/*
		아래 연산자 사용 가능

		&=
		|=
		^=
		~= 
	*/

	return 0;
}