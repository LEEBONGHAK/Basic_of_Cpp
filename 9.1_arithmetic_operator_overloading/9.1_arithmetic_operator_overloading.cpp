#include <iostream>

#define endl '\n'
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int &getCents() { return m_cents; }

    // friend
    //friend Cents operator + (const Cents& c1, const Cents& c2)
    //{
    //    return Cents(c1.getCents() + c2.getCents());
    //}

    // member function - 왼쪽에 있는 것은 this로 대체해야함
    Cents operator + (const Cents& c2)
    {
        return Cents(this->m_cents + c2.getCents());
    }
};

void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
    c_out.getCents() = c1.getCents() + c2.getCents();
}

Cents add1(const Cents& c1, const Cents& c2)
{
    return Cents(c1.getCents() + c2.getCents());
}

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//    return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
    Cents cents1(6);
    Cents cents2(8);

    Cents sum;
    add(cents1, cents2, sum);

    cout << "더하기 방법1" << endl;
    cout << sum.getCents() << endl;

    cout << "더하기 방법2" << endl;
    cout << add1(cents1, cents2).getCents() << endl;

    cout << "더하기 방법3" << endl;
    cout << (cents1 + cents2).getCents() << endl;


    // ?:(삼항연산자) ::(scope 연산자) sizeof .(member selection) .*(member pointer selection) - overloading 불가
    // 우선순위는 그대로 적용됨 - 우선순위는 수정 불가

    // ->, =, [], ()  => member function으로만 overloading 가능

    return 0;
}
