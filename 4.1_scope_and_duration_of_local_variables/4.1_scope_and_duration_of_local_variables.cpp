#include <iostream>
#define endl '\n'
using namespace std;

namespace work1
{
	int a = 1;
	void do1()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void do1()
	{
		a += 5;
	}
}

namespace work1
{
	namespace work11 {
		namespace work111 {
			int a = 1;
			void do1() 
			{
				a += 3;
			}
		}
	}
}

// c++17 이상 가능
namespace work2::work22::work222
{
	int a = 1;
	void do1() 
	{
		a += 5;
	}
}

int main()
{
	int apple = 5;

	apple = 1;

	{
		int apple = 2;
		cout << apple << endl;
	}

	cout << apple << endl;

	work1::a;
	work1::do1();

	work2::a;
	work2::do1();

	work2::work22::work222::a;
	work2::work22::work222::do1();

	return 0;
}