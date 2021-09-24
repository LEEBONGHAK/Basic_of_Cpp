#include <iostream>
//#include <cstdint>	// iostream에 include 되어있음

int main()
{
	// 고정 너비 정수 (Fixed-width Integers): 어떤 플랫폼이든 같은 data size를 사용하게 해주는 것

	using namespace std;

	std::int64_t i(5);	// 5
	std::int8_t myint = 65;	// 'A'

	cout << i << endl;
	cout << myint << endl;

	std::int_fast8_t fi(5);	// 8 bit 중 가장 빠른 type
	std::int_least64_t fl(5);	// 적어도 8 byte를 갖는 data type

	cout << fi << endl;
	cout << fl << endl;

	return 0;
}