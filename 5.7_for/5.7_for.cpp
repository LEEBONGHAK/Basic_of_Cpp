#include <iostream>

#define endl '\n'
using namespace std;

int pow(int base, int  exponent)
{
	int result = 1;
	for (int count = 0; count < exponent; count++)
		result *= base;
	
	return result;
}

int main()
{
	// counter로 사용할 변수 선언; 조건; 증감
	for (int i = 0; i < 10; i++)	// iteration
	{
		cout << i << endl;
	}
	cout << endl;

	for (int i = 9; i >= 0; i--)	// iteration
	{
		cout << i << endl;
	}
	cout << endl;

	for (int i = 9; i >= 0; i -= 2)	// iteration
	{
		cout << i << endl;
	}
	cout << endl;

	// counter로 2개 이상을 사용하는 것도 가능
	for (int i = 0, int j = 0; (i + j) < 10; ++i, j += 2)
	{
		cout << i << " " << j << endl;
	}

	return 0;
}
