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
    void setCents(int cents) { m_cents = cents; }

    // int 형으로 overloading
    operator int()
    {
        cout << "cast here" << endl;
        return m_cents;
    }
};

class Dollar
{
private:
    int m_dollars = 0;

public:
    Dollar(const int &input) : m_dollars(input) {}

    operator Cents()
    {
        return Cents(m_dollars * 100);
    }
};

void printInt(const int &value)
{
    cout << value << endl;
}

int main()
{
    Cents cents(7);

    int value = (int)cents;
    value = int(cents);
    value = static_cast<int>(cents);
    printInt(cents);
    cout << endl;

    Dollar dol(2);
    Cents cents1 = dol;
    printInt(cents1);

    return 0;
}