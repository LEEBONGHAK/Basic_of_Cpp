#include <iostream>
#define endl '\n'
using namespace std;

int add(int a, int b)
{
	return a + b;
}

//auto add2(auto a, auto b) 불가
auto add2(int a, int b)
{
	return a + b;
}

int main()
{
	// 초기화를 하지 않으면 auto 사용 불가
	auto a = 123;
	auto b = 1.23;
	auto c = 1 + 2;
	auto d = 1 + 2.0;
	auto result = add(1, 2);
	auto result2 = add2(1, 2);

	return 0;
}
