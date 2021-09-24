#include <iostream>
#include <algorithm>
using namespace std;

// #define : 매크로, build 전 해당 내용으로 교체해줌 - 이 파일 내에서만 정의됨
#define MY_NUMBER 9
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE

#define TEST
void something();

int main()
{
	cout << MAX(1, 2) << endl;
	cout << std::max(1, 2) << endl;	// standard library를 사용하는 방법


	// LIKE_APPLE이 정의 되었다면 - 전처리기 상태에서는 교체를 하지 않고 그차제를 사용
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif // LIKE_APPLE

	// LIKE_APPLE이 정의 되지 않았다면
#ifndef LIKEAPPLE
	cout << "ORANGE" << endl;
#endif // !LIKEAPPLE


	// 전처리기의 if-else 문
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#else
	cout << "ORANGE" << endl;
#endif // !LIKEAPPLE


	something();

	return 0;
}