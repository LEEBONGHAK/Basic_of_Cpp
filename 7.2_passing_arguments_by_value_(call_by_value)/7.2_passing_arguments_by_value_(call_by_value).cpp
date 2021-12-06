#include <iostream>

#define endl '\n'
using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	/* 값에 의한 인수 전달 - Passing Arguments by Value (Call by Value) */

	doSomething(5);
	cout << endl;

	int x = 6;
	cout << "In main " << x << " " << &x << endl;

	doSomething(x);	// 실제로 전달되는 것을 x가 아닌 x의 값 '6'이 전달됨
	doSomething(x + 1);

	return 0;
}