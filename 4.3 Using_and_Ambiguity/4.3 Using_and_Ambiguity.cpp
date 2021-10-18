#include <iostream>

namespace a
{
	int my_var(20);
	int my_a(10);
}

namespace b
{
	int my_var(20);
	int my_b(10);
}

int main()
{
	 using namespace std;
	//using std::cout;
	//using std::endl;

	cout << "Hello" << endl;
	cout << endl;

	using namespace a;
	using namespace b;

	// ambiguous(모호성)
	//cout << my_var << endl;

	cout << my_a << endl;
	cout << my_b << endl;

	return 0;
}