#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

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

    friend std::ostream& operator << (std::ostream& out, const Cents& cents)
    {
        out << cents.m_cents;
        return out;
    }

    friend bool operator == (const Cents& c1, const Cents& c2)
    {
        return c1.m_cents == c2.m_cents;
    }

    // sort를 위해 사용하려면 operator는 < 이 구현이 되어야함
    friend bool operator < (const Cents& c1, const Cents& c2)
    {
        return c1.m_cents < c2.m_cents;
    }
};

int main()
{
    //int a = 3, b = 3;
    //if (a == b)
    //    cout << "Equal" << endl;

    Cents c1(6);
    Cents c2(6);

    if (c1 == c2)
        cout << "Equal" << endl;
    else
        cout << "not Equal" << endl;
    cout << endl << endl;


    // sorting 하기
    vector<Cents> arr(20);
    for (unsigned i = 0; i < 20; i++)
        arr[i].getCents() = i;

    // C++17 이하에서 사용 가능 (C++17 이상에서는 폐기됨)
    //std::random_shuffle(begin(arr), end(arr));

    // C++17이상 (with include <random>)
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr.begin(), arr.end(), g);

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    std::sort(arr.begin(), arr.end());

    for (auto& e : arr)
        cout << e << " ";
    cout << endl;

    return 0;
}