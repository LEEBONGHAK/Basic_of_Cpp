#include <iostream>

#define endl '\n'

using namespace std;

int add(int q, int p) {
	return q + p;
}

int main()
{
	int x = 5;
	int y;

	y = ++x;
	y = x++;
	y = --x;
	y = x--;

	int a = 6, b = 6;
	cout << a << " " << b << endl;	// 6 6
	cout << ++a << " " << --b << endl;	// 7 5
	cout << a << " " << b << endl;	// 7 5
	cout << a++ << " " << b-- << endl;	// 7 5
	cout << a << " " << b << endl;	// 8 4
	printf("\n");

	// 부작용 예시 (컴파일러마다 다를 수 있음) - 따라서 이런식의 사용은 하지 않는 것이 좋음
	int m = 1;
	int n = add(m, ++m);	// do not use
	cout << n << endl;	// 예상: 3, 실제 결과: 4

	m = 1;
	n = 2;
	cout << add(m, ++n) << endl;	// 이건 괜찮을 수 있음
	printf("\n");

	// 부작용2 (컴파일러마다 다를 수 있음)
	m = m++; // do not use
	cout << m << endl;	

	return 0;
}