#include <iostream>
#include <string>

#define endl '\n'
using namespace std;

int main()
{
	/* 방어적 프로그래밍 */

	// syntax error - 문법 오류
	//int x

	// semantic error - 문맥 오류
	/*int x;
	cin >> x;
	if (x >= 5) cout << "x is greater than 5" << endl;*/

	// violated assumption - 가정을 위한 (사용자가 전혀 다른 방식으로 사용한다.)
	string hello = "Hello, my name is Jack jack";
	int ix;

	cout << "Input from 0 to " << hello.size() - 1 << endl;
	while (true)
	{
		cin >> ix;
		if (ix >= 0 && ix <= hello.size() - 1) break;
		else cout << "Please try again" << endl;
	}
	cout << hello[ix] << endl;	// hello의 길이를 넘은 수를 대입할 경우 violated assumption -> 미리 방지

	return 0;
}