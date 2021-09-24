#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	// boolean type
	bool bValue = false;
	cout << bValue << endl;
	cout << (bValue ? 1 : 0) << endl;
	printf("\n");

	// char type
	char chValue = 'A';
	char chValue2 = 65;
	cout << chValue << endl;
	cout << (int) chValue << endl;
	cout << chValue2 << endl;
	printf("\n");

	// float type
	float fValue = 3.141592f;
	cout << fValue << endl;
	printf("\n");

	// double type
	double dValue = 3.141592;
	cout << dValue<< endl;
	printf("\n");

	// auto type in modern cpp - 컴파일할 때 자동으로 data type을 결정해줌
	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;
	cout << aValue << endl;
	cout << aValue2 << endl;
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	printf("\n");

	// sizeof
	cout << sizeof(bool) << endl;	// 1 bit
	cout << sizeof(char) << endl;	// 1 byte
	cout << sizeof(int) << endl;	// 4 byte
	cout << sizeof(float) << endl;	// 4 byte
	cout << sizeof(double) << endl;	// 8 byte
	printf("\n");

	// various initialization
	int a = 123;	// copy initialization
	int b(123);		// direct initialization
	int c{ 123 };	// uniform initialization - 좀 더 엄격함 (알맞는 data를 넣어주지 않으면 error)
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}