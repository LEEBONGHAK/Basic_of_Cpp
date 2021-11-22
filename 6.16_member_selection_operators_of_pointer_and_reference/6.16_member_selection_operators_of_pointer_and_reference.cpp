#include <iostream>

#define endl '\n'
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	/* 포인터와 참조의 멤버 선택 연산자 */
	Person person;

	// 일반적인 방법
	person.age = 5;
	person.weight = 30.0;

	// reference 사용
	Person &ref = person;
	ref.age = 15;

	// pointer 사용
	Person *ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;	// de-referencing 할때는 우선순위 때문에 () 꼭 사용. 그러나 위에 방법이 더 좋음

	Person &ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;


	return 0;
}