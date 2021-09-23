#include <iostream>

using namespace std;

int main()
{
    int x = 2; // x is a variable, 2 is a literal

    // binary operators (이항 연산자)
    cout << x + 2 << endl;
    cout << x - 2 << endl;
    cout << x * 2 << endl;
    cout << x / 2 << endl;

    // unary operator (단항 연산자)
    cout << -x << endl;     

    // ternary operator (삼항 연산자)
    cout << (x > 0 ? "yes" : "no") << endl;

    return 0;
}