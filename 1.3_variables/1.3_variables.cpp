/*
	객체 object : 의미있는 정보들이 메모리에 저장되어 있는 것/곳
	변수 variables : 객체의 이름 (사람이 인식할 수 있는 것으로 즉, 주소의 다른 이름)
	Left-values and Right-values : 메모리 주소를 사람이 직접적으로 다룰 수 있는지의 유무
	초기화 initialization : 메모리 공간에 초기 데이터를 지정해주는 것
	초기화를 안 했을 때의 문제점 : 메모리는 공유를 해서 사용하는데 이전에 사용한 쓰레기 데이터가 남아있을 수 있다.
*/

#include <iostream>

int main() {

	// integer
	// int x(123);
	int x = 123;	// initialization
	x = x + 2;	// = : assignment operator (대입)

	std::cout << x << std::endl;
	std::cout << &x << std::endl;	// & : call variable's address

	int a = 1;
	a = a + 2;
	std::cout << a << std::endl;

	int b = a;
	std::cout << b << std::endl;

	// is (a + b) l-value or r-value ?  r-value
	std::cout << a + b << std::endl;

	std::cout << a << std::endl;

	// initialization error
	//int z;
	//std::cout << z << std::endl;

	return 0;
}