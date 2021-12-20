#include <iostream>
#include <cstdarg>	// for ellipsis

#define endl '\n'
using namespace std;

// count : parameter로 들어올 argument의 개수
double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; arg++)
		sum += va_arg(list, int);

	va_end(list);

	return sum / count;
}

int main(int argc, char* argv[])
{
	/*
		생략부호 Ellipsis

		- 함수의 매개변수가 정해지지 않았으면 좋을 때 사용
	*/
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;	// 1
	cout << findAverage(3, 1, 2, 3) << endl;	// 2
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;	// 3
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;	// 이상한 값 -> semantic error(문맥 오류)

	return 0;
}