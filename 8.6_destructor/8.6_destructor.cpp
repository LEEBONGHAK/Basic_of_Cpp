#include <iostream>

#define endl '\n'
using namespace std;

/*
	소멸자(Destructor)

	- 변수가 영역을 벗어나 사라질 때 호출됨
*/

class Simple
{
private:
	int	m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor" << m_id << endl;
	}

	// destructor
	~Simple()
	{
		cout << "Destructor" << m_id << endl;
	}
};

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;
	
public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}

	int size()
	{
		return m_length;
	}

	//동적할당 memory leak 방지에 사용하기 좋음 - vector 쓰면 상관 없음
	~IntArray()
	{
		if (m_arr != nullptr) 
			delete[] m_arr;
	}
};

int main()
{
	//Simple s1(0);
	Simple* s1 = new Simple(0);
	Simple s2(1);

	delete s1;
	cout << endl;

	while (true)
	{
		IntArray my_int_arr(10000);
	}
	return 0;
}