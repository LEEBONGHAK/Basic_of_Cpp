#include <iostream>

namespace MySpace1 {
	namespace InnerSpace {
		int my_function() {
			return 0;
		}
	}
	int doSomething(int a, int b) {
		return a + b;
	}
}

namespace MySpace2 {
	int doSomething(int a, int b) {
		return a * b;
	}
}

using namespace std;

int main()
{
	{
		using namespace MySpace1;
		using namespace MySpace1::InnerSpace;

		cout << doSomething(1, 2) << endl;
		my_function();
	}

	cout << MySpace2::doSomething(3, 4) << endl;
	cout << MySpace1::doSomething(1, 2) << endl;

	return 0;
}