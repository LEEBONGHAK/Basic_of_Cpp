#include <iostream>
#include <cmath>    // pow
#include <limits>   // numeric_limits
#include <cstdio>

using namespace std;

int main()
{
    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    printf("\n");

    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;
    printf("\n");

    s = 32767;
    s = s + 1; // 32768
    cout << s << endl;  // overflow (-32767)

    s = -32768;
    s = s - 1;  // -32769
    cout << s << endl;  // overflow (32767)
    printf("\n");

    cout << std::numeric_limits<unsigned short>::max() << endl;
    unsigned short us = 1;
    us = 65535;
    us = us + 1;
    cout << us << endl; // overflow (0)

    us = 0;
    us = us - 1;
    cout << us << endl; // overflow (65535)

    return 0;
}