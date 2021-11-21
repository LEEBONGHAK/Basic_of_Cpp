#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	/* Dynamic Memory Allocation (메모리 동적 할당) */

	//int arr[1000000];	// static memory array (정적 메모리 배열)  - stack에 저장되며 stack는 적은 메모리를 가짐

	int *ptr = new int;	// 포인터에 int에 해당하는 memory 부여 - 매우 큰 사이즈의 데이터의 다룰때 유리
	*ptr = 7;
	delete ptr;	// 할당된 메모리를 os에 되돌려 주는 과정 (프로그램이 종료하기 전에)
	ptr = nullptr;

	int *ptr2 = new int{ 7 };
	cout << ptr2 << endl;
	cout << *ptr2 << endl;
	delete ptr2;
	cout << "After delete" << endl; // 할당된 메모리는 지웠지만 주소는 남아있기 때문에 runtime error
	//cout << ptr2 << endl;
	//cout << *ptr2 << endl;
	ptr2 = nullptr;	// 위의 문제를 방지하기 위해 사용
	if (ptr2 != nullptr)
	{
		cout << ptr2 << endl;
		cout << *ptr2 << endl;
	}
	cout << endl;

	// 메모리를 할당 받지 못할 때 (메모리 부족 등의 이유로) => 프로그램 종료 or 할당받을 때까지 대기 후 할당 받음
	int *ptr3 = new (std::nothrow) int{ 7 };	// 할당받을 때까지 대기 후 할당 받음 - 예외 처리 부분
	if (ptr3)
	{
		cout << ptr3 << endl;
		cout << *ptr3 << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}
	delete ptr3;
	ptr3 = nullptr;
	cout << endl;

	int *ptr4 = new (std::nothrow) int{ 7 };
	int *ptr5 = ptr4;
	delete ptr4;
	ptr4 = nullptr;
	ptr5 = nullptr;	// ptr5에 ptr4가 들어있기 때문에 nullptr를 넣어주어야 함

	/* 
		memory leak (메모리 누수) 
		- 메모리 반환을 제대로 하지 않았을 경우 발생 가능

		new와 delete는 os에 갔다와야하기 때문에 약간 느림
		-> 극복할 수 있는 방안이 많이 나오고 있음
	*/

	return 0;
}