#include <iostream>

#define endl '\n'
using namespace std;

enum Type {
	INT,
	FLOAT,
	CHAR
};

// void pointer, generic pointer - 모든 데이터 타입을 포괄적으로 다룰 수 있음

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	// 다양한 data type을 넣어도 문제 없음
	// data type을 확실히 알 수 없고, pointer 연산 불가(data type을 특정할 수 없기 때문에)
	// de-referencing도 불가 -> 강제로 casting해야 함
	ptr = &i;
	ptr = &f;
	//ptr = &c;

	//cout << ptr + 1 << endl; // pointer 연산 불가
	//cout << *ptr << endl; // de-referencing 불가
	cout << *static_cast<float*>(ptr) << endl;	// void pointer de-referencing 방법


	cout << endl;


	Type type = FLOAT;
	cout << &f << " " << ptr << endl;
	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;


	cout << endl;


	// void pointer가 아니기 때문에 pointer 연산 가능
	int* ptr_i = &i;
	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	return 0;
}