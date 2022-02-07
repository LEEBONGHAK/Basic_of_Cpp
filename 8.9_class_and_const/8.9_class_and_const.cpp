#include <iostream>
#include <string>

#define endl '\n'
using namespace std;

class Something
{
public:
	int m_value = 0;

	// default copy constructor (숨겨져 있음) - argument로 복사될 때 constructor를 호출하지 않고 대신 자동으로 호출됨
	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "Copy constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	int	getValue() { return m_value; }
};

class Something1
{
public:
	int m_value = 0;

	void setValue(int value) { m_value = value; }
	int	getValue() const
	{ 
		return m_value; 
	}
};

void print(Something st)
{
	cout << &st << endl;
	cout << st.m_value << endl;
}

// 최적화를 위해 많이 사용되는 방법 - 복사하는 과정을 방지하여 최적화됨
void print1(const Something1 &st)
{
	cout << &st << endl;
	cout << st.getValue() << endl;
}


class som
{
public:
	string m_value = "default";

	string& getValue()
	{
		cout << "non-const version" << endl;
		return m_value;
	}

	const string& getValue() const 
	{ 
		cout << "const version" << endl;
		return m_value; 
	}
};

int main()
{
	const Something something;
	//something.setValue(3);	// object(instance)가 const라서 value 변경 불가
	//cout << something.getValue() << endl; // const 때문에 불가 - 컴파일러가 판단할 때는 값 변경문제가 아닌 멤버 함수가 const인지 아닌지만 봄

	const Something1 something1;
	cout << something1.getValue() << endl;
	cout << endl;

	Something n_something;
	cout << &n_something << endl;
	print(n_something);
	cout << endl;


	som som1;
	cout << som1.getValue() << endl;
	som1.getValue() = "10";
	cout << som1.getValue() << endl;

	const som som2;
	cout << som2.getValue() << endl;
	som2.getValue(); // = "1004" (X)
	cout << som2.getValue() << endl;

	return 0;
}
