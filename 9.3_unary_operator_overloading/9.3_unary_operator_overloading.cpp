#include <iostream>
#include <fstream>  // 파일 입출력

#define endl '\n'
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    Cents operator - () const
    {
        return Cents(-m_cents);
    }

    bool operator ! () const
    {
        // m_cents == 0 -> return true;
        return (m_cents == 0) ? true : false;
    }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents)
    {
        out << cents.m_cents;
        return out;
    }

    friend std::istream& operator >> (std::istream& in, Cents& cents)
    {
        in >> cents.m_cents;
        return in;
    }
};

int main()
{
    //int a = 3;
    //cout << +a << endl;
    //cout << -a << endl;
    //cout << !a << endl;

    Cents c1(6);
    Cents c2(0);

    // - operator
    cout << c1 << endl;
    cout << -c1 << endl;
    cout << -Cents(-10) << endl << endl;

    // not operator
    cout << !c1 << " " << !c2 << endl << endl;

    return 0;
}