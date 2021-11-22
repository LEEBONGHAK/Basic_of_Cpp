#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	const int length = 5;
	int arr[length];	// static memory array

	int d_length;
	cin >> d_length;
	int* d_arr = new int[d_length] {};	// dynamically allocating array

	for (int i = 0; i < d_length; i++)
		d_arr[i] = i;

	for (int i = 0; i < d_length; i++)
	{
		cout << (uintptr_t)&d_arr[i] << endl;
		cout << d_arr[i] << endl;
	}
	cout << endl;
	delete[] d_arr;

	int fixedArray[] = { 1,2,3,4,5 };
	int *d_arr2 = new int[5]{ 1,2,3,4,5 };
	//int* d_arr2 = new int[]{ 1,2,3,4,5 }; // 안됨
	
	/*
		resizing

		1. 직접적으론 안됨(정적은 안됨)
		2. 더 큰 메모리를 받고 복사 후 추가
		3. os에 요청하여 가능한지 물어봄 (될 수도 있고, 안될 수도 있음)
	*/

	delete d_arr2;

	return 0;
}