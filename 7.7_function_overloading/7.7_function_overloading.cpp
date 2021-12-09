#include <iostream>

#define endl '\n'
using namespace std;

/*
	Function overloading

	- 동일한 이름의 함수를 여러개 만드는 것
	- 들어오는 매개변수가 다른데 수행하는 기능이 비슷할 경우 사용가능
	- 잘 사용하면 편함
	- 그러나 애매하게 사용하면 오히려 혼란을 가져옴

	# 주의 사항

	- 함수가 다르다 같다는 함수 이름만은 아닌 매개변수가 다르면 다른 함수처럼 인식됨
	- 해당 매개변수에 가장 알맞는 함수에 적용되어 실행됨 이때, 이는 컴파일할 때 결정됨(중요)
	- C++에서는 함수 return type만 다른 경우는 overloading이 안됨
*/
int add(int x, int y)
{
	return x + y;
}

int add(double x, double y)
{
	return x + y;
}

// 같은 type으로 인식됨 -> overloading 안됨
//typedef int my_int;
//void print(int x) {}
//void print(my_int x) {}

// 난감한 경우 -> 의도된 것과 다른 함수가 적용될 수 있다.
void print(const char *value) {}
void print(int value) {}

// 모호함을 가짐
void print(unsigned int value) {}
void print(float value) {}

int main()
{
	cout << add(1, 2) << endl;
	cout << add(3.1, 4.2) << endl;

	//print(0);
	//print('a');
	//print(3.14592);

	return 0;
}