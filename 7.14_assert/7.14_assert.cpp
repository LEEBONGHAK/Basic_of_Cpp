#include <iostream>
#include <array>
#include <cassert>	// assert.h

#define endl '\n'
using namespace std;

void printValue(const array<int, 5> &my_arr, const int &ix)
{
	assert(ix >= 0);
	assert(ix <= my_arr.size() - 1);


	cout << my_arr[ix] << endl;
}

int main()
{
	/* 
		단언하기 assert 

		- release mode에서는 작동 안함
		- debug mode에서만 작동 (assert 메세지와 발생 위치를 표시 - false일 경우)
		- runtime에서 체크해줌


		static_assert

		- 컴파일 타임에서 결정되는 것을 체크해주는 assert
	*/
	//assert(false);

	int number = 5;

	// ...

	// number should be 5
	assert(number == 5);



	// static_assert
	array<int, 5> my_arr{ 1,2,3,4,5 };
	//printValue(my_arr, 100);
	printValue(my_arr, 3);
	cout << endl;

	
	const int x = 5;
	assert(x == 5);
	static_assert(x==5, "x should be 5");	

	return 0;
}