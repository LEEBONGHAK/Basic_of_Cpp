#include <iostream>
#include <cstdlib>	// exit()

int main()
{
	/*
		제어 흐름 (control flow)

		1. 중단 (Halt)
		2. 점프 (Jump) - goto, break, continue
		3. 조건 분기 (Conditional branches) - if, switch
		4. 반복 (Loops) - while, do while, for
		5. 예외 처리 (Exceptions) - try, catch, throw
	*/

	std::cout << "I love you" << std::endl;

	// 강제 종료 - debuging할 때 많이 사용
	exit(0);

	std::cout << "I love you, too" << std::endl;

	return 0;
}