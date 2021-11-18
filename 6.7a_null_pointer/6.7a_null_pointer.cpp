#include <iostream>
#include <cstddef>	// std::nullptr_t, 

#define endl '\n'
using namespace std;

void doSomething(double *ptr)
{
	cout << "address of pointer variable in doSomething() " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	/*
		포인터에 쓰레기 값이 들어있는 경우 잘못된
		de-referencing를 방지하기 위해 null pointer 사용
	*/
	double* ptr = 0;	// c-style
	double* ptr1 = NULL;	// c-style
	double* ptr2 = nullptr;	// modern c++

	if (ptr2 != nullptr) 
	{
		// do something
	}
	else 
	{
		// do nothing with ptr
	}

	doSomething(ptr2);
	doSomething(nullptr);

	double d = 123.4;
	doSomething(&d);
	
	double *ptr_d = &d;
	doSomething(ptr_d);
	cout << endl;

	std::nullptr_t nptr;	// nullptr만 넣어짐

	cout << "address of pointer variable in main() " << &ptr2 << endl;

	return 0;
}