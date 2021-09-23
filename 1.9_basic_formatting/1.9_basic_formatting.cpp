#include <iostream>

int add(int a, int b) {

    return a + b;   // indenting : tab으로 빈칸을 만드는 것
}

int main() {

    std::cout << "Hello, World!" << "abcdef" << 
        "Hello, Home" << std::endl;


    /*
        하드(hard) 코딩: 프로그래머가 코드에서 변수값을 리터럴 같이 고정된 값으로 직접 대입해주는 방식
        소프트(soft) 코딩: 프로그램 실행 중에 사용자의 입력이나 외부파일, 인터넷 통신 등으로 데이터를 가져오는 방식
    */
    int x           = 1;
    int num_apple   = 123;
    int my_num      = 4;

    return 0;
}