#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	int value = 7;
	int *ptr_v = &value;

	cout << uintptr_t(ptr_v - 1) << endl;
	cout << uintptr_t(ptr_v) << endl;
	cout << uintptr_t(ptr_v + 1) << endl;
	cout << uintptr_t(ptr_v + 2) << endl;
	cout << endl;


	double value2 = 7;
	double *ptr_v2 = &value2;

	cout << uintptr_t(ptr_v2 - 1) << endl;
	cout << uintptr_t(ptr_v2) << endl;
	cout << uintptr_t(ptr_v2 + 1) << endl;
	cout << uintptr_t(ptr_v2 + 2) << endl;
	cout << endl;


	int arr[] = { 9,7,5,3,1 };
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " " << (uintptr_t)&arr[i] << endl;

	cout << endl;

	int *ptr_a = arr;
	for (int i = 0; i < 5; i++)
		cout << *(ptr_a + i) << " " << (uintptr_t)(ptr_a + i) << endl;

	cout << endl;


	char name[] = "jack jack";
	const int n_name = sizeof(name) / sizeof(char);
	char *ptr_n = name;

	for (int i = 0; i < n_name; i++)
		cout << *(ptr_n + i) << endl;

	return 0;
}