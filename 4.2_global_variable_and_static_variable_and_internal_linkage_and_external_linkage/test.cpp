#include <iostream>
#include "MyConstant.h"

#define endl '\n'
using namespace std;

extern int b = 1;

void something()
{
	cout << b << endl;
	cout << "hello" << endl;
	cout << "In test.cpp " << Constants::pi << &Constants::pi << endl;
}