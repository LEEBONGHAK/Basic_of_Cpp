#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	/*
		do-while 문
		- 반드시 1번은 실행

		do
		{
			반드시 1번은 실행 후 while의 조건에 따라 실행 여부 결정됨
		} while (조건);
	*/

	// must be declared outside do/while loop
	int selection;

	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;

	return 0;
}
