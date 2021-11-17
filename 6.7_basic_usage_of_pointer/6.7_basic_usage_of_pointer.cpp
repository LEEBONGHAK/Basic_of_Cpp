#include <iostream>
#include <typeinfo>

#define endl '\n'
using namespace std;

struct Something {
	int a, b, c, d;	// 4 X 4 = 16 bytes
};

int main()
{
	/*
		지역 변수 : 스택(stack) 메모리 사용
		동적 할당 메모리 : 힙(heap) 메모리 사용

		큰 메모리에 저장되어 있는 데이저 중에서 일부분을
		CPU가 사용하기 위해 메모리에서 가져올 때는 메모리
		전체를 모두 뒤지며 찾는 것이 아닌 필요한 데이터가
		저장되어 있는 '주소'를 사용하여 직접 접근해 가져옴
	*/
	int x = 5;
	cout << x << endl;
	cout << &x << endl; // & : address of operator
	cout << (int)&x << endl;
	cout << endl;

	// de-reference operator (*)
	/*
		de-reference
		=> 포인터가 "저쪽 주소에 가면 이 데이터가 있어요"라고
		간접적으로 가리키기만 하는 것에 대해 "그럼 거기에 진짜
		뭐가 있는지 내가 들여다볼께"라며 직접적으로 접근하겠다는 의미
	*/
	cout << *(&x) << endl;
	cout << *&x << endl;
	cout << endl;

	//typedef int* pint;
	//pint ptr_x = &x, ptr_y = &x;
	int *ptr_x = &x, *ptr_y = &x;	// 앞에 '*'를 붙이는 것이 더 실수를 줄일 수 있음
	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	cout << typeid(ptr_x).name() << endl;
	cout << endl;

	double d = 1.0;
	double *ptr_d = &d;
	cout << ptr_d << endl;
	cout << *ptr_d << endl;
	cout << typeid(ptr_d).name() << endl;
	cout << endl;

	// 주소의 길이는 고정되어 있음 - 집이 크다고 집주소가 크지 않듯이
	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	cout << endl;

	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ss) << endl;
	cout << sizeof(ptr_s) << endl;

	return 0;
}