#include <iostream>
#include <string>
#include <typeinfo>

#define endl '\n'
using namespace std;

// struct 생성 - 생성과 동시에 default로 값 초기화 가능
struct Person
{
	double height;
	float weight;
	int age;
	string name;

	// struct 내부에 함수 생성도 가능
	void print() {
		cout << height << " " << weight << " " << age << " " << name << endl;
	}
};

void printPerson(Person ps) {
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << endl;
}

// 함수에서 struct return 가능
Person getMe()
{
	Person me{ 123.0, 124.0f, 46, "world" };

	return me;
}

// struct안에 struct
struct Family
{
	Person me, mom, dad;
};

struct Employee		// 2 + 4 + 8 = 14
{
	short id;		// 2 bytes
	int age;		// 4 bytes
	double wage;	// 8 bytes
};

int main()
{
	/* struct - 다양한 type의 데이터를 묶는 방법 */

	Person me;
	// 초기화 - 예전 방법
	me.age = 20;
	me.name = "hello";
	me.height = 2.0;
	me.weight = 100.0f;

	// 일반적으로 사용하는 초기화
	Person mom{123.0, 124.0f, 46, "world"};
	Person dad;

	printPerson(me);
	me.print();
	cout << endl;

	// 단순한 경우 대입 가능
	Person me2(me);
	me2.print();

	Person me3;
	me3 = me;
	me3.print();

	Person me_from_func = getMe();
	me_from_func.print();

	// struct size
	Employee emp1;
	cout << sizeof(Employee) << endl;	// 16 - padding에 의해 달라짐

	return 0;
}