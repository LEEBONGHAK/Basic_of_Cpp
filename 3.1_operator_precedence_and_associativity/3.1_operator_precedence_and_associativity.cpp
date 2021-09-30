#include <iostream>
#include <cmath>

#define endl '\n'

using namespace std;

int main()
{
	int x = 4 + 2 * 3;		// 10
	int y = (4 + 2) * 3;	// 18
	int z = 3 * 4 / 2;		// 6

	// unary plus / minus (right-to-left)
	x = +3;
	y = -3;

	x = pow(2, 3);

	cout << x << endl;

	int r = 1 + 2 + 3 * 4;
	cout << r << endl;

	int a = 1, b = 2, c = 3;
	a = b = c;
	cout << a << b << c << endl;

	a = 0;
	c = 0;
	int d = 1;
	cout << a || b && c || d << endl;

	int t = 10, w = 1;
	t /= --w + 5;
	cout << t << endl;

	return 0;
}