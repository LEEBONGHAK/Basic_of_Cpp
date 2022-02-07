#include <iostream>

#define endl '\n'
using namespace std;

class Something
{
private:
	static int s_value;
	int	m_value;

public:
	static int getValue()
	{
		return s_value;	// this pointer 사용 불가
		//return m_value;	// non-static member value도 불가 (this가 포함된 의미이기 때문에)
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value = 1024;	// constructor에서도 초기화 불가능

class Something1
{
public:
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;	// static member varible 초기화하는 다른 방법
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	static int getValue()
	{
		return s_value;
	}
};

Something1::_init Something1::s_initializer;

int main()
{
	//cout << Something::s_value << endl;
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	int (Something:: * fptr1)() = &Something::temp;
	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;


	cout << Something1::getValue() << endl;

	return 0;
}
