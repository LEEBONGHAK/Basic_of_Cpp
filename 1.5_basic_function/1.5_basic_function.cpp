#include <iostream>
#include <cstdio>

using namespace std;

int addTwoNumbers(int num_a, int num_b) {

	int sum = num_a + num_b;

	return sum;
}

void printHelloWorld() {

	cout << "Hello World" << endl;

	// return;	// 원한다면
}

int main() {

	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	printf("\n");

	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers(8, 13) << endl;
	printf("\n");

	printHelloWorld();
	printHelloWorld();
	printHelloWorld();
	printHelloWorld();

	return 0;
}