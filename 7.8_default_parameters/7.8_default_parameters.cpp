#include <iostream>
#include <string>

#define endl '\n'
using namespace std;

// 정의를 분리할 경우 default값을 하나만 지정해줘야 함 - 보통 header file에 있는 정의에 넣어줌
void print(int x = 10, int y = 20, int z = 30);	// in header

void print1(string str) {}
void print1(char ch = ' ') {}

void print2(int x) {}
void print2(int x, int y = 20) {} // 모호해짐 즉, overloading 불가

int main()
{
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300);

	print1();

	return 0;
}

// default parameter, optional parameter
// dafault값을 넣어준 parameter를 기준으로 오른쪽에 있는 모든 parameter에 default값을 넣어주어야 함
void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}