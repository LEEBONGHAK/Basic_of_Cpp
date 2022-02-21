#include <iostream>

#define endl '\n'
using namespace std;

class C;	// 전방 선언 - forward declaration

class A
{
private:
	int m_val = 1;

	friend void doSomething(A &a);
};

void doSomething(A& a)
{
	cout << a.m_val << endl;
}



class B
{
private:
	int m_val = 1;

	friend void doSomething1(B& b, C &c);
};

class C
{
private:
	int m_value = 2;

	friend void doSomething1(B& b, C& c);
};

void doSomething1(B &b, C &c)
{
	cout << b.m_val << " " << c.m_value << endl;
}



class A1;

class B1
{
private:
	int m_value = 2;

public:
	void doSomething(A1& a1);
};

class A1
{
private:
	int m_value = 1;

	//friend B1;
	friend void B1::doSomething(A1& a1);
};

void B1::doSomething(A1& a1)
{
	cout << a1.m_value << endl;
}

int main()
{
	A a;
	doSomething(a);
	cout << endl;

	B b;
	C c;
	doSomething1(b, c);
	cout << endl;

	A1 a1;
	B1 b1;
	b1.doSomething(a1);

	return 0;
}
