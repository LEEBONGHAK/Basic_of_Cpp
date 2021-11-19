#include <iostream>

#define endl '\n'
using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main()
{
	//char name[] = "Jack Jack";
	//char *name = "Jack Jack";	// error
	const char *name = "Jack Jack";	// symbolic constant로 해결 가능
	const char *name2 = "Jack Jack";
	const char *name3 = "Jack Jack2";

	cout << name << endl;
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << (uintptr_t)name3 << endl;

	const char *name4 = getName();
	cout << (uintptr_t)name4 << endl;
	cout << endl;


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char *name5 = "Jack Jack";

	cout << int_arr << endl;
	cout << char_arr << endl;	// cout에서 문자열은 특별하게 다룸
	cout << name5 << endl;
	cout << endl;

	char c = 'Q';
	cout << &c << endl;	// cout에서 문자열이라고 가정하기 때문에 주소값이 이상하게 나옴

	return 0;
}