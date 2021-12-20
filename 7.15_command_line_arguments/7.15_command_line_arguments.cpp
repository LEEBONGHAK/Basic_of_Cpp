#include <iostream>
#include <string>

#define endl '\n'
using namespace std;

/* 
	명령줄 인수 - command line arguments 

	- int argc : 개수
	- char *argv[] : 실제 내용
*/
int main(int argc, char *argv[])
{
	for (int count = 0; count < argc; count++)
		cout << argv[count] << endl;
	cout << endl;

	for (int count = 0; count < argc; count++)
	{
		string argv_single = argv[count];

		if (count == 1)
		{
			int input_number = std::stoi(argv_single);		// stoi() : string to int (문자열을 정수형으로 변환)
			cout << input_number + 1 << endl;
		}
		else 
			cout << argv_single << endl;
	}
	cout << endl;

	// 참고 : Boost library에 Boost.Program_options를 사용하면 command line arguments를 처리할 때 편함

	return 0;
}