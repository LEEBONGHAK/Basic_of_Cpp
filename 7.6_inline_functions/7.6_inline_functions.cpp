#include <iostream>

#define endl '\n'
using namespace std;

/*
	inline function

	- 실제 계산보다 일련의 과정이 시간이 더 걸릴 경우 최적화를 위해 많이 사용
	- inline 키워드는 강제가 아닌 가능하면 해달라는 키워드 즉, 모두 inline을 쓴다고 무조건 빨라지는 건 아님
	- 최근에는 컴파일러가 자체적으로 inline을 도입해서 컴파일 하는 경우도 있음
	- 프로그램 크기에 따라 inline의 효과를 못받는 경우도 존재
*/
inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	// inline function을 사용하면 아래처럼 함수가 아닌 것처럼 컴파일됨
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;

	return 0;
}