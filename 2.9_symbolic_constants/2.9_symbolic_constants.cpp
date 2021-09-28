#include <iostream>
#include "MY_CONST.h"

/* macro */
/*
	상수를 대체하기 위한 macro는 cpp에서는 거의 쓰지 않음

	1. 디버깅이 힘들어 지고
	2. 적용되는 범위가 너무 넓어지기 때문에
*/ 
#define PRICE_PER_ITEM 30	

using namespace std;

// 함수로 들어오는 변수의 값을 함수 내에서 수정하는 것을 방지하기 위해
void printNumber(const int my_number) {
	int n = my_number;

	cout << n << endl;
}

int main()
{
	/* const variables */
	// const 를 통해 변수 값이 수정되는 것을 방지
	const double gravity(9.8);
	printNumber(123);


	// 컴파일타임 초기화
	// constexpr: 컴파일타임에 값이 완전히 결정되는 것을 컴파일할 때 체크 (컴파일타임 초기화와 런타임 초기화를 구분짓기 위해서
	constexpr int my_const(123);

	int number;
	cin >> number;

	// 런타임 초기화
	const int special_number(number);

	const int price_per_item = 30;	// macro 대신 const를 이용해 많이 사용

	double radius;
	cin >> radius;

	double circumfreence = 2.0 * radius * constants::pi;

	return 0;
}
