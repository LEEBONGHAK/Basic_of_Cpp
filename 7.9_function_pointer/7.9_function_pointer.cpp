#include <iostream>
#include <array>
#include <functional>

#define endl '\n'
using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

int func1(int x)
{
	return 7;
}

void printNumber(const array<int, 10> &my_arr)
{
	for (auto element : my_arr)
	{
		if (element % 2 == 0) cout << element;
	}
	cout << endl;
}

void printNumbers(const array<int, 10>& my_arr, bool print_even)
{
	for (auto element : my_arr)
	{
		if (print_even && element % 2 == 0) cout << element;
		if (!print_even && element % 2 == 1) cout << element;
	}
	cout << endl;
}


bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

void printNumbers1(const array<int, 10>& my_arr, bool (*check_func)(const int&) = isEven)
{
	for (auto element : my_arr)
	{
		if (check_func(element) == true) cout << element;
		//if (!print_even && element % 2 == 1) cout << element;
	}
	cout << endl;
}


typedef bool (*check_func_t)(const int&);
//using check_func_t = bool (*)(const int&);
void printNumbers2(const array<int, 10>& my_arr, check_func_t check_func = isEven)
{
	for (auto element : my_arr)
	{
		if (check_func(element) == true) cout << element;
	}
	cout << endl;
}



void printNumbers3(const array<int, 10>& my_arr, std::function<bool(const int&)> check_func)
{
	for (auto element : my_arr)
	{
		if (check_func(element) == true) cout << element;
	}
	cout << endl;
}

int main()
{
	// basic using of function pointer
	func();
	cout << func << endl;

	int (*fcnptr)() = func;
	cout << fcnptr << endl;
	cout << fcnptr() << endl;
	cout << endl;

	fcnptr = goo;
	cout << goo << endl;
	cout << fcnptr << endl;
	cout << fcnptr() << endl << endl;

	int (*fcnptr1)(int) = func1;
	cout << func1 << endl;
	cout << fcnptr1 << endl;
	cout << fcnptr1(1) << endl << endl;

	
	array<int, 10> my_arr{ 0,1,2,3,4,5,6,7,8,9 };
	for (auto element : my_arr)
	{
		if (element % 2 == 0) cout << element;
	}
	cout << endl;
	printNumber(my_arr);
	cout << endl;


	// function with function pointer
	printNumbers(my_arr, true);
	printNumbers(my_arr, false);
	cout << endl;

	printNumbers1(my_arr, isEven);
	printNumbers1(my_arr, isOdd);
	printNumbers1(my_arr);
	cout << endl;

	printNumbers2(my_arr, isEven);
	printNumbers2(my_arr, isOdd);
	printNumbers2(my_arr);
	cout << endl;

	
	// function pointer with std::function
	std::function<bool(const int&)> fcnptr2 = isEven;
	printNumbers3(my_arr, fcnptr2);
	fcnptr2 = isOdd;
	printNumbers3(my_arr, fcnptr2);


	return 0;
}