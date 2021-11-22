#include <iostream>

#define endl '\n'
using namespace std;

// reference 미사용
void doSomething(int n)
{
	n = 10;
	cout << "In doSomething " << n << endl;
}

// reference 사용
void doSomething2(int &n)
{
	cout << &n << endl;

	n = 10;
	cout << "In doSomething " << n << endl;
}

void printElements(const int (&arr)[5])
{
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	cout << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	/* 참조 변수 - reference variable */
	int value = 5;

	// 일반적인 pointer
	int *ptr = nullptr;
	ptr = &value;

	// reference variable
	// 내부적으로 ref와 value가 같은 variable처럼 작동
	int &ref = value;
	cout << ref << endl;
	ref = 10;	//*ptr = 10;
	cout << value << " " << ref << endl;
	cout << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << endl;

	/*
		reference variable의 특징

		1. 반드시 초기화되어야 함
		2. literal이 못 들어감, variable만 가능
		3. pointer와 const의 관계를 동일하게 가짐
	*/
	int x = 5;
	int &ref2 = x;

	const int y = 5;
	const int &ref3 = y;

	
	int n = 5;
	cout << n << endl;
	doSomething(n);
	cout << n << endl << endl;

	cout << n << endl;
	cout << &n << endl;
	doSomething2(n);
	cout << n << endl << endl;

	
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };
	printElements(arr);


	Other ot;
	ot.st.v1 = 1;	// 이름이 길어지고 사용하기 힘들어짐 (효율도 낮아짐)
	int &v1 = ot.st.v1;	// reference를 사용하면 좋음
	v1 = 2;

	return 0;
}