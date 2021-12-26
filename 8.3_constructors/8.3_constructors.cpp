#include <iostream>

#define endl '\n'
using namespace std;

class Fraction
{
private:
	int m_numerator;	// 분자
	int m_denominator;	// 분모

public:
	// 생성자 Constructors
	// 생성자가 없으면 숨겨진 default constructor가 실행됨 - 생성자가 하나라도 있으면 숨겨진 생성자는 실행이 안됨
	Fraction()
	{
		m_numerator = 0;
		m_denominator = 1;

		cout << "Fraction() constructor" << endl;
	}

	Fraction(const int& num_in, const int& den_in)
	{
		m_numerator = num_in;
		m_denominator = den_in;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	Fraction frac;	// 생성자의 paramemter가 없는 경우 함수와 헷갈리는 것을 피하기 위해 ()를 안써줌
	frac.print();
	cout << endl;

	Fraction frac1(1, 3);
	frac1.print();
	cout << endl;

	// {} : type 변환 불가(더 엄격함),  () : type 변환 가능


	First fir;

	return 0;
}