#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	// 원래 variable이 const라면 pointer도 const
	// 그렇게 하면 de-referencing을 해 값을 바꾸는 것이 불가능
	const int value = 5;
	const int *ptr = &value;
	//*ptr = 6;



	// 가능 - de-referencing을 해 값을 바꾸지 않겠다는 의지 (직접적으로 값을 바꾸는 것은 가능)
	int value2 = 5;
	const int *ptr2 = &value2;
	//*ptr = 7;

	// pointer에 다른 주소를 넣는 것은 가능
	int value3 = 6;
	ptr2 = &value3;



	// pointer를 상수로 만드는 const
	// de-referencing하여 값을 바꾸는 것은 가능하지만 다른 주소를 넣는 것은 불가능
	int value4 = 5;
	int *const ptr3 = &value4;

	*ptr3 = 10;
	//int value5 = 7;
	//ptr3 = &value5;	// 불가능



	// de-referencing하여 값을 바꾸는 것과 다른 주소를 넣는 것 둘다 불가능
	int value5 = 5;
	const int *const ptr4 = &value5;
	
	// 둘다 안됨
	//*ptr4 = 7;
	//int value6 = 6;
	//ptr4 = &value6;


	return 0;
}