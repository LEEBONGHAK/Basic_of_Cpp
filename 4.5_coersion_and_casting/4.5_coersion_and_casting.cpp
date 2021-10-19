#include <iostream>
#include <typeinfo>		// typeid()

#define endl '\n'
using namespace std;

int main()
{
	/*
		암시적 형변환 (Implicit type conversion(coersion))과
		명시적 형변환 (Explicit type conversion(casting))
	*/
	
	/* 암시적 형변환 - 프로그래머가 변환하라고 명확하게 말하는 게 아닌 컴파일러가 자체적으로 변환하는 것 */
	// numeric promotion (작은 것을 큰 것으로) -> 문제 발생 가능성 낮음
	float a = 1.0f;
	double b = a;	// float을 double로 형변환 
	cout << typeid(b).name() << endl;
	cout << b << endl;

	// numeric conversion (큰 것을 작은 것으로) -> 문제 발생 가능성 높음
	int i = 30000;	// double을 int로 형변환 
	char c = i;
	cout << static_cast<int>(c) << endl;
	cout << endl;

	/* 명시적 형변환 - 프로그래머가 변환하라고 말하는 것 */
	// c++ style casting
	int x = int(4.0);
	x = static_cast<int>(6.0);

	// c style casting
	int y = (int)5.0;

	return 0;
}