#include <iostream>

#define endl '\n'
using namespace std;

int getInt()
{
	while (true)
	{	
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		// 입력 실패할 경우 true 반환
		if (std::cin.fail())
		{
			std::cin.clear();	// 입력된 값 제거
			std::cin.ignore(32767, '\n');	// buffer 비우기
			cout << "Invalid number, please try again" << endl;
		}
		else {
			std::cin.ignore(32767, '\n');	// buffer 비우기
			return x;	
		}
	}
}

char getOperator()
{
	while (true) {
		cout << "Enter an operator : ";
		char op;
		cin >> op;
		std::cin.ignore(32767, '\n');	// buffer 비우기

		if (op == '+' || op == '-' || op == '*' || op == '/') return op;
		else cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else if (op == '*') cout << x * y << endl;
	else if (op == '/') cout << x / y << endl;
	else
	{
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}