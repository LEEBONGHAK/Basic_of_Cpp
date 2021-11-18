#include <iostream>

#define endl '\n'
using namespace std;

struct MyStruct
{
	int arr[5] = { 9,7,5,3,1, };
};

void doSometing(MyStruct ms)
{
	cout << sizeof(ms.arr) << endl;
}

void doSometing1(MyStruct *ms)
{
	cout << sizeof((*ms).arr) << endl;
}

void printArray(int arr[]) 
{
	cout << sizeof(arr) << endl;
	cout << *arr << endl;
	
	*arr = 100;
}

int main()
{
	int arr[5] = { 9,7,5,3,1, };

	cout << arr << endl;	// same with arr[0]'s address
	cout << &(arr[0]) << endl;
	
	cout << *arr << endl;
	cout << arr[0] << endl;
	cout << endl;

	int *ptr = arr;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << endl;

	cout << sizeof(arr) << endl;	// 5 X 4 = 20 bytes
	cout << sizeof(ptr) << endl;	// 주소가 차지하는 메모리 공간
	cout << endl;

	printArray(arr);
	cout << arr[0] << " " << *arr << endl;
	cout << endl;

	*ptr = 9;
	cout << *ptr << " " << *(ptr + 1) << endl;
	cout << endl;

	char name[] = "jackjack";
	cout << *name << endl;
	cout << endl;

	MyStruct ms;
	cout << ms.arr[0] << endl;
	cout << sizeof(ms.arr) << endl;
	doSometing(ms);
	doSometing1(&ms);

	return 0;
}