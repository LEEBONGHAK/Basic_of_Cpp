#include <iostream>

#define endl '\n'
using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b') break;

		if (ch == 'r') return; // 현재 함수에서 빠져나오기
	}
	cout << "Hello" << endl;
}

int main()
{
	/* break, continue - 반복문 제어 방법 */
	int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 10) break;	// 현재 반복문에서 빠져나오기
		count++;
	}
	cout << endl;

	breakOrReturn();
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5) break;
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0) continue;
		cout << i << endl;
	}

	return 0;
}