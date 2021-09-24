#include <iostream>

// 헤더가드가 없을 경우 같은 함수가 있을 경우 중복되어 build가 안될 수 있음
#include "Header.h"
#include "add.h"

int main()
{
	doSomething();

	return 0;
}