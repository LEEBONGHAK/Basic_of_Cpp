#include <iostream>
#define endl '\n'
using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color)
{
	switch (color)
	{
	case Colors::BLACK:
		cout << "Black" << endl;
		break;
	case Colors::WHITE:
		break;
	case Colors::RED:
		break;
	case Colors::GREEN:
		break;
	case Colors::BLUE:
		break;
	}

	// 다른 방법
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	}
}


int main()
{
	int x;
	cin >> x;

	switch (x)
	{
	case 0:
		cout << "Zero";
		break;	// 무조건적인 것을 아니고 의도적으로 안넣는 경우도 있다.
	case 1:
		cout << "One";
		break;
	case 2:
		cout << "Two";
		break;
	}
	cout << endl;

	printColorName(Colors::BLACK);
	cout << endl;


	/* 주의 사항 */
	switch (x)
	{
		//int a;	// 변수 선언 가능
		//int b = 5;	// 변수 선언과 동시에 초기화 불가능 (초기화(대입)은 case 내에서만 가능)
		int y;
	case 0:
		//a = 1;
		//cout << a << endl;
		break;
	case 1:
		y = 5;
		break;
	case 2:
		//cout << y << endl;	// error
		break;
	default:
		cout << "Undefined input " << x << endl;
		break;
	}

	return 0;
}