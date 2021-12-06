#include <iostream>
#include <cmath>		// sin(), cos()
#include <vector>

#define endl '\n'
using namespace std;

void addOneValue(int y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

void addOneReference(int &y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

// degress은 입력 / sin_out, cos_out -> 함수를 호출한 곳에서도 영향을 미침 (값을 여러 개 return 하는 효과)
void getSinCos(const double &degrees, double &sin_out, double &cos_out)
{
	// static const -> 함수 안에서 매번 선언이 되는 것이 아닌 재사용됨
	static const double pi = 3.141592 / 180.0;

	const double redians = degrees * pi;
	sin_out = std::sin(redians);
	cos_out = std::cos(redians);
}

void foo(const int &x)
{
	cout << x << endl;
}


//typedef int* pint;
//void foo1(pint &ptr);
void foo1(int* &ptr)
{
	cout << ptr << " " << &ptr << endl;
}

void printElement(int (&arr)[4])
{

}

void printElement1(vector<int> &arr)
{

}

int main()
{
	/* 참조에 의한 인수 전달 - Passing Arguments by Reference (Call by Reference) */

	int x = 5;
	cout << x << " " << &x << endl << endl;
	addOneValue(x);
	cout << x << " " << &x << endl << endl;
	addOneReference(x);
	cout << x << " " << &x << endl << endl;
	cout << endl;


	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl << endl;


	foo(6);
	cout << endl;


	int x1 = 5;
	int* ptr = &x1;
	cout << ptr << " " << &ptr << endl;
	foo1(ptr);


	int arr[]{ 1,2,3,4 };
	printElement(arr);

	vector<int> arr1{ 1,2,3,4, };
	printElement1(arr1);

	return 0;
}