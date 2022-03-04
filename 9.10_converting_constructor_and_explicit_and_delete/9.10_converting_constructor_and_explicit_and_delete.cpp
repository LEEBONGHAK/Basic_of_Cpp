#include <iostream>
#include <cassert>

#define endl '\n'
using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(char) = delete;    // 해당 생성자를 막음 - 예전 버전의 기능(방법)을 막을 때 주로 사용

    Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }

    friend std::ostream& operator << (std::ostream& out, const Fraction& f)
    {
        cout << f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

void doSomething(Fraction frac)
{
    cout << frac;
}

int main()
{
    Fraction frac(7);

    doSomething(frac);
    doSomething(Fraction(7));
    doSomething(7); // converting constructor(변환 생성자) - 자동으로 생성자처럼 바꿔줌

    // 생성자에 앞에 'explicit' 을 추가하면 converting constructor를 막음

	return 0;
}