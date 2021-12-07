#include <iostream>
#include <array>
#include <tuple>

#define endl '\n'
using namespace std;

// return by value
int getValue(int x)
{
	int value = x * 2;
	return value;
}

// return by address
int* getValue1(int x)
{
	int value = x * 2;
	return &value;
}

int* allocateMemory(int size)
{
	return new int[size];
}

// return by reference
int& getValue3(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& my_arr, int ix)
{
	return my_arr[ix];
}

// return by struct
struct S 
{
	int a, b, c, d;
};

S getStruct() 
{
	S my_s{ 1,2,3,4 };

	return my_s;
}

// return by tuple
std::tuple<int,double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	/* 다양한 반환 값들 (값, 참조, 주소, 구조체, 튜플) */

	int value = getValue(3);

	int value1 = *getValue1(3);
	cout << value1 << endl;	// 위험함 - 변수는 사라졌는데 사라진 변수의 값를 받음
	int* value2 = getValue1(3);	// 더 위험함 - 변수는 사라졌는데 사라진 변수의 주소를 받음
	cout << endl;


	int *arr = allocateMemory(1024); // delete의 위치가 애매함
	delete[] arr;

	int &value3 = getValue3(5); // 위험함 - 변수는 사라졌는데 사라진 변수의 참조를 받음
	cout << value3 << endl;
	cout << value3 << endl;
	cout << endl;


	// return by reference 사용 예
	std::array<int, 100> my_arr;
	my_arr[30] = 10;
	cout << my_arr[30] << endl;
	get(my_arr, 30) = 1024;	// 좀 더 안전하게 다루기 위해
	cout << my_arr[30] << endl;
	cout << endl;


	S my_s = getStruct();


	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;		// a
	cout << std::get<1>(my_tp) << endl;		// d
	cout << endl;


	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	return 0;
}