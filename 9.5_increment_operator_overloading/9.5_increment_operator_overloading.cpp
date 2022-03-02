#include <iostream>

#define endl '\n'
using namespace std;

class Digit
{
private:
    int m_digit;

public:
    Digit(int digit = 0) : m_digit(digit) {}

    // prefix (전위형)
    Digit & operator ++ ()
    {
        ++m_digit;

        // 자기 자신 return
        return *this;
    }

    // postfix (후위형) - 더미 자료형을 넣어줌
    Digit operator ++ (int)
    {
        Digit temp(m_digit);

        ++(*this);
        return temp;
    }

    Digit& operator --()
    {
        --m_digit;
        return *this;
    }

    Digit operator -- (int)
    {
        Digit tmp(m_digit);

        --(*this);
        return tmp;
    }

    friend std::ostream& operator << (std::ostream& out, const Digit& digit)
    {
        out << digit.m_digit;
        return out;
    }
};

int main()
{
    //int a = 10;
    //cout << ++a << endl;  // 11
    //cout << a << endl;    // 11
    //cout << a++ << endl;  // 11
    //cout << a << endl;    // 12

    Digit d(5);
    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl << endl;


    cout << --d << endl;
    cout << d << endl;
    
    cout << d-- << endl;
    cout << d << endl;

    return 0;
}