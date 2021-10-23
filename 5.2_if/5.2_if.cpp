#include <iostream>

#define endl '\n'
using namespace std;

int min(int x, int y)
{
	//if (x > y)	return y;
	//else return x;

	return (x > y) ? y : x;
}

int main()
{
	/*
		조건문 if

		if (조건) 
		{
			조건이 맞으면 수행
		} 
		else if (조건)
		{
			조건이 맞으면 수행
		}
		else 
		{
			위의 조건이 다 안 맞으면 수행
		}
	*/

	int x;
	cin >> x;

	if (x > 10) {
		cout << x << " is greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	else
	{
		cout << x << " is not greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	
	if (x > 10)
		cout << "x is greater than 10" << endl;
	else if (x < 10)
		cout << "x is less than 10" << endl;
	else   // if (x == 10)
		cout << "x is exactly 10" << endl;

	if (x = 0)	// x = 0; if(x)
	{
		cout << x << endl;
	}

	cout << x << endl;

	return 0;
}
