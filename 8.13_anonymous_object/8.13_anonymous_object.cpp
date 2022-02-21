#include <iostream>

#define endl '\n'
using namespace std;

class A
{
public:
	A()
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void print()
	{
		cout << "Hello" << endl;
	}
};

class A1
{
public:
	int m_val;

	A1(const int &input)
		: m_val(input)
	{
		cout << "Constructor" << endl;
	}

	~A1()
	{
		cout << "Destructor" << endl;
	}

	void printDouble()
	{
		cout << m_val * 2 << endl;
	}
};



class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	A a;
	a.print();
	a.print();
	cout << endl;

	// anonymous object - 재사용은 불가
	A().print();
	A().print();
	cout << endl << endl;

	A1 a1(1);
	a1.printDouble();
	cout << endl;

	A1(1).printDouble();
	cout << endl << endl;

	cout << add(Cents(6), Cents(8)).getCents() << endl;
	cout << int(6) + int(8) << endl;

	return 0;
}
