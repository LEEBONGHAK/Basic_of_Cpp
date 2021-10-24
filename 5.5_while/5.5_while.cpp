#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	/*
		while 문

		while (조건) 
		{
			조건이 맞으면 조건이 틀릴 때까지 실행
		}
	*/
	cout << "While-loop test" << endl;
	
	int count = 0;
	while (count < 10)
	{
		cout << count << endl;
		count++;
	}
	cout << endl;

	// 무한 루프 탈출하기
	count = 0;
	while (1)
	{
		cout << count << endl;
		count++;

		if (count == 10) break;
	}
	cout << endl;

	// double while
	int out_cnt = 1;
	while (out_cnt <= 5)
	{
		int in_cnt = 1;
		while (in_cnt <= out_cnt)
		{
			cout << in_cnt++ << " ";
		}
		cout << endl;
		out_cnt++;
	}

	return 0;
}