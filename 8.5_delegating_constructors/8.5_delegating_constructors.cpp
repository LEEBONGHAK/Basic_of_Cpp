#include <iostream>
#include <string.h>

#define endl '\n'
using namespace std;

class Student
{
private:
	int		m_id;
	string	m_name;

public:
	Student(const string& name_in)
		//: m_id(0), m_name(name_in)
		//: Student(0, name_in)	// delegating constructors(위임 생성자) : 생성자가 생성자를 가져다 쓰는 것
	{
		init(0, name_in);
	}

	Student(const int& id_in, const string& name_in)
		//: m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}

	// 생성자를 분리하여 사용하는 법 (초기화 함수 사용)
	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(0, "Jack jack");
	st1.print();

	Student st2("Dan");
	st2.print();

	return 0;
}