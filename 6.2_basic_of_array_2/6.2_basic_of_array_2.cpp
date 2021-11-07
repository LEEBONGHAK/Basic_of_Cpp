#include <iostream>

#define endl '\n'
using namespace std;

void doSomething(int my_arr[])
{
	cout << my_arr[0] << endl;
	cout << my_arr[1] << endl;
	cout << my_arr[2] << endl;
	cout << (int)&my_arr[0] << endl;
	cout << (int)&my_arr[1] << endl;
	cout << (int)&my_arr[2] << endl;

	cout << sizeof(my_arr) << endl;
}

int main()
{
	int students_scores[20];

	cout << (int)&students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << (int)&students_scores[1] << endl;
	cout << (int)&students_scores[2] << endl;
	cout << (int)&students_scores[3] << endl;

	cout << sizeof(students_scores) << endl;
	cout << endl;

	int my_arr[3] = { 1,2,3 };
	cout << my_arr[0] << endl;
	cout << my_arr[1] << endl;
	cout << my_arr[2] << endl;
	cout << (int)&my_arr[0] << endl;
	cout << (int)&my_arr[1] << endl;
	cout << (int)&my_arr[2] << endl;
	cout << sizeof(my_arr) << endl;
	
	doSomething(my_arr);

	return 0;
}