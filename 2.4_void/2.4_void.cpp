#include <iostream>

void my_function(void) {

}

int main()
{
	// void type: 메모리를 차지하지 않는 data type
	// 포인터 다룰 때 casting하여 많이 사용됨

	using namespace std;

	//void my_void;
	int i = 123;
	float f = 123.456f;

	void* my_void;

	my_void = (void*)&i;
	cout << my_void << endl;

	my_void = (void*)&f;
	cout << my_void << endl;

	return 0;
}