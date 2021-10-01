#include <iostream>

#define endl '\n'

using namespace std;

int main()
{
	/* sizeof : 어떤 data type의 메모리 크기(byte)를 알고 싶을 때 사용 */
	float a;
	
	cout << sizeof(float) << endl;
	cout << sizeof a << endl;	// sizeof float : denied
	printf("\n");


	/* comma operator */
	int x = 3;
	int y = 10;
	int z = (++x, ++y);	// for문에서는 많이 쓰임
	/*
		++x;
		++y;
		int z = y;
	*/

	cout << x << " " << y << " " << z << endl;	// 4 11 11

	// comma operator 주의 사항
	int n = 1, m = 10;	// comma operator가 아닌 구분 기호 ( ,가 항상 comma operator는 아님 )
	int k;

	k = n, m;
	cout << n << " " << m << " " << k << endl;	// 1 10 1 (연산자 우선순위 때문에)

	k = (n, m);
	cout << n << " " << m << " " << k << endl;	// 1 10 10
	
	k = (++n, n + m);
	cout << k << endl;	// 12


	/* conditional operator (arithmetric if) (조건부 연산자) -> 삼항 연산자 */
	bool onSale = true;
	int price;

	if (onSale) {
		price = 10;
	}
	else {
		price = 100;
	}

	cout << price << endl;

	// const 에서 매우 유용 (값이 바뀌지 않을 필요가 없을 때)
	const int newPrice = (onSale == true) ? 10 : 100;

	cout << newPrice << endl;
	printf("\n");

	int i = 5;
	cout << ((i % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}