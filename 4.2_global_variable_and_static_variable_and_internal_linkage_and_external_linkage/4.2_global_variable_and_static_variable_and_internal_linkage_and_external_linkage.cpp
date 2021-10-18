#include <iostream>
#include "MyConstant.h"

#define endl '\n'
using namespace std;

/* forward declaration function with external linkage */
extern void something();
/* forward declaration variable with external linkage */
extern int b;

/* global variable */
int value = 123;

/* static (duration) variable */
void doSome() 
{
	// static : 변수가 받은 메모리가 고정 (고정된 메모리 주소) 단, 초기화가 안되면 사용 불가
	static int a = 1;
	++a;
	cout << a << endl;
}

int main()
{
	cout << value << endl;

	/* local variable */
	int value = 1;

	/* global scope operator(전역 연산자) :: */
	cout << ::value << endl;
	cout << value << endl;
	cout << endl;

	doSome();
	doSome();
	cout << endl;

	something();
	cout << b << endl;
	cout << endl;

	// external linkage를 사용하지 않으면 Constants::pi의 주소가 다름 -> 메모리 낭비
	cout << "In main.cpp " << Constants::pi << &Constants::pi << endl;
	something();

	return 0;
}

/*
	정리
 
	int g_x;	// external linakge 가능 (global variable)
	static int g_x;	// internal linkage (static variable)
	const int g_x;	// X (const는 초기화 필수, 0으로 초기화하고 싶어도 초기화 해주는 게 좋음)

	extern int g_z;		// forward declaration
	extern const int g_z;	// 다른 곳 한 군데서만 초기화를 해주어야함

	int g_y(1);	// 초기화된 전역변수
	static int g_y(1);	// internal linkage만 가능한 static global variable
	const int g_y(1);	// internal linkage만 가능한 const global variable

	extern int g_w(1);	// external linkage가 가능한 global variable -> 다른 곳에서 초기화하면 안됨
	extern const int g_w(1);	// external linkage가 가능한 const global variable
*/