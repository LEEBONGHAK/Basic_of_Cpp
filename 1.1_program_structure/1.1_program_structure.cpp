// input output stream
#include <iostream>

int main(void) {

	/*
		프로그래밍은 Operating System(OS, 운영체제)을 통해서 하는 것
		빈칸, 빈줄은 컴파일러가 무시
		; 은 마침표 같은 것
	*/

	// statements(명령들)
	int x = 2;	// 리터럴, literal
	x = 5;
	int y = x + 3;

	std::cout << y << std::endl;	// <<: output operator
	std::cout << x << std::endl;
	std::cout << 1 + 2 << std::endl;

	/*
		주석 잘 다는 방법

		사람이 볼 때 편하게
		코드 설명 잘 알아 볼 수 있게
		코드를 봐서 직접적으로 알 수 있는 부분은 안적어도 됨
	*/

	return 0;	// 프로그램이 끝나고 0을 반환해라
}