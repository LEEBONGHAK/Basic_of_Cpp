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
    Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }

    // copy constructor - copy를 방지하려면 private으로 이동
    Fraction(const Fraction& fraction)
        : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << "Copy constructor called" << endl;
    }

    friend std::ostream & operator << (std::ostream & out, const Fraction & f)
    {
        cout << f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

Fraction doSomething()
{
    Fraction temp(1, 2);
    cout << &temp << endl;

    return temp;
}

int main()
{
    Fraction frac(3, 5);
    cout << "Origin : " << frac << endl;
    Fraction fr_copy(frac);
    cout << "Copy : " << fr_copy << endl;

    // copy initialization
    Fraction fr_copy1 = frac;
    cout << "copy initialization : " << fr_copy1 << endl;

    Fraction fr_copy2(Fraction(3, 10));
    cout << "It is not copy by compiler dicision " << fr_copy2 << endl;


    // It have different result with debug mode and release mode by complier's optimization
    // RVO - return value optimization
    Fraction result = doSomething();
    cout << &result << endl;
    cout << "result : " << result << endl;

    return 0;
}