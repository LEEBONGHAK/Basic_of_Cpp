#include <iostream>

void something() {

	using namespace std;

#ifdef TEST
	cout << "TEST is here" << endl;
#else
	cout << "TEST is not here" << endl;
#endif
}