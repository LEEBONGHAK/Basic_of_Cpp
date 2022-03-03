#include <iostream>

#define endl '\n'
using namespace std;

class Accumulator
{
private:
	int m_counter = 0;
	
public:
	// parenthesis operator = ()
	int operator () (int i)
	{
		return (m_counter += i);
	}
};

int main()
{
	Accumulator acc;
	// Functor
	cout << acc(10) << endl;
	cout << acc(20) << endl;

	return 0;
}