#include <iostream>
#include <iomanip>	// setprecision()

#define endl '\n'

using namespace std;

int main()
{
	int x = 1;
	int y = -x;
	cout << x << " " << y << endl;
	printf("\n");

	x = 6;
	y = 2;
	int z;

	z = x + y;
	cout << z << endl;
	z = x - y;
	cout << z << endl;
	z = x * y;
	cout << z << endl;
	z = x / y;
	cout << z << endl;
	z = x % y;
	cout << z << endl;
	printf("\n");

	cout << setprecision(3);
	cout << x / y << endl;
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;
	printf("\n");

	z = x;
	z += y;	// z = z + y
	z -= y;	// z = z - y
	z *= y;	// z = z * y
	z /= y;	// z = z / y
	z %= y;	// z = z % y

	return 0;
}