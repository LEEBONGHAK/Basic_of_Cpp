#include <iostream>	// cout, cin, endl, ...
#include <cstdio>	// printf

int main() {

	/* cout, endl - for output */
	using namespace std;

	std::cout << "I love you";
	std::cout << "I love you\n";
	std::cout << "I love you" << std::endl;

	int x = 123;
	std::cout << "x is " << x << std::endl;

	double pi = 3.141592;
	std::cout << "pi is " << pi << std::endl;

	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	cout << "I love you";
	cout << "I love you\n";
	cout << "I love you" << endl;

	cout << "\a";	// a : audio (소리 출력)
	printf("I love you\n");
	printf("\n");


	/* cin - for input */
	int a;
	std::cin >> a;
	std::cout << "Your input is " << a << std::endl;

	int b = 1;
	cout << "Before your input is " << b << endl;
	cin >> b;
	cout << "After your input is " << b << endl;

	return 0;
}