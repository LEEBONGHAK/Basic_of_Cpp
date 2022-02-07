#include <iostream>

#define endl '\n'
using namespace std;

class Simple
{
private:
	int	m_id;

public:
	Simple(int id)
	{
		setID(id);	// 내부적으로 this->setID(id);

		// 자기 자신의 주소 출력
		cout << this << endl;
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
};

class Calc
{
private:
	int	m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);	// 개념상 Simple::setID(&s2, 4); 실제 사용은 안됨
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;
	cout << endl;

	Calc cal(10);
	cal.add(10);
	cal.sub(1);
	cal.mult(2);

	cal.print();
	cout << endl;


	/* Chaining member function */
	Calc cal1(10);
	cal1.add(10).sub(1).mult(2).print();
	/*
		Calc cal1(10);
		Calc &temp1 = cal1.add(10);
		Calc &temp2 = cal1.sub(1);
		Calc &temp3 = cal1.mult(2);
		temp3.print();
	*/

	return 0;
}