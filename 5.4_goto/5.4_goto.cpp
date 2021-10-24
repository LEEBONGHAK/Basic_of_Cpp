#include <iostream>
#include <cmath>	// sqrt()

#define endl '\n'
using namespace std;

int main()
{
	/* goto 문 - 현재는 잘 안씀 */
	double x;

tryAgain:	//label

	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;	// tryAgain으로 가라

	cout << sqrt(x) << endl;

	return 0;
}
