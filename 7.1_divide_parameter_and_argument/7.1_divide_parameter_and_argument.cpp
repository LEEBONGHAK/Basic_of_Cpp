#include <iostream>

#define endl '\n'
using namespace std;

int foo(int x, int y);	// int x, int y : parameters - 매개변수

int foo(int x, int y)
{
	return x + y;
}	// x and y are destoryed here

int main()
{
	int x = 1, y = 2;

	foo(6, 7);	// 6, 7 : arguments (actual parameters) - 실인자
	foo(x, y + 1);

	return 0;
}