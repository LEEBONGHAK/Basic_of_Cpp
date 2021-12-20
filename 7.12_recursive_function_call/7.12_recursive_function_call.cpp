#include <iostream>

#define endl '\n'
using namespace std;

void countDown(int count)
{
	cout << count << endl;
	
	if (count > 0) countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0) return 0;
	else if (sumto == 1) return 1;
	else return sumTo(sumto - 1) + sumto;
}

int fibonacci(int n)
{
	if (n == 0 || n == 1) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	countDown(5);
	cout << endl;
	
	cout << sumTo(10) << endl;
	cout << endl;

	for (int i = 0; i < 10; i++)
		cout << fibonacci(i) << " ";
	cout << endl;

	return 0;
}