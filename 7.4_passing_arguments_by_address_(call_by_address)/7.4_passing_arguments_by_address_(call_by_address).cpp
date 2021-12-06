#include <iostream>

#define endl '\n'
using namespace std;

void foo(int *ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

int main()
{
	/* 주소에 의한 인수 전달 (pointer 사용) - Passing Arguments by Address (Call by Address) */

	int value = 5;
	cout << value << " " << &value << endl;
	int* ptr = &value;
	cout << &ptr << endl;
	foo(ptr);
	foo(&value);
	//foo(5);	// error (literal이기 때문에 주소가 없음)

	return 0;
}