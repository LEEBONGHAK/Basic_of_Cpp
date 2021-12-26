#include <iostream>
#include <string>
#include <vector>

#define endl '\n'
using namespace std;

// Object
// Friend : name, address, age, height, weight, ...
//			printFriend()

// 일반적으로 데이터만 넣을 때는 structure, 기능을 함께 넣을 때는 class를 사용함
// class : object라는 개념을 프로그래밍 언어로 구현을 하는 키워드
class FriendClass
{
public:	// access specifier(접근 지정자) (public, private, protected)
	string name;
	string address;
	int age;
	double height;
	double weight;

	// 데이터와 기능이 묶여 있는 것 = Object
	void printFriend()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

struct Friend
{
	string name;
	string address;
	int age;
	double height;
	double weight;

	// structure에서는 잘 안하는 편
	void printFriend()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

void printFriend(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

void printFriend(const Friend &fr)
{
	cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
}

int main()
{
	// using normal variables
	string name = "Jack Jack";
	string address = "Uptown";
	int age = 2;
	double height = 30.0;
	double weight = 10.0;

	printFriend(name, address, age, height, weight);
	cout << endl;


	// using vectors
	vector<string> name_vec;
	vector<string> addr_vec  ;
	vector<int> age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	name_vec.push_back("Jack Jack");
	addr_vec.push_back("Uptown");
	age_vec.push_back(2);
	height_vec.push_back(30.0);
	weight_vec.push_back(10.0);

	printFriend(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);
	cout << endl;


	// using structure
	Friend jj;	// Friend jj{"Jack Jack", "Uptown", 2, 30.0, 10.0};
	jj.name = "Jack Jack";
	jj.address = "Uptown";
	jj.age = 2;
	jj.height = 30.0;
	jj.weight = 10.0;

	printFriend(jj.name, jj.address, jj.age, jj.height, jj.weight);
	printFriend(jj);
	jj.printFriend();
	cout << endl;


	// 친구가 많아지면 코딩양도 많이 늘어남 -> OOP 사용
	// instanciation : 메모리를 차지하도록 정의해 주는 것
	// instance : class 변수 이름
	FriendClass jj1{ "Jack Jack", "Uptown", 2, 30.0, 10.0 };
	cout << &jj1 << endl;
	jj.printFriend();
	cout << endl;


	// vector with Class
	vector<FriendClass> my_friends;
	my_friends.push_back(FriendClass{ "Jack Jack", "Uptown", 2, 30.0, 10.0 });
	my_friends.push_back(FriendClass{ "Jack Jack", "Uptown", 2, 30.0, 10.0 });
	my_friends.push_back(FriendClass{ "Jack Jack", "Uptown", 2, 30.0, 10.0 });
	my_friends.push_back(FriendClass{ "Jack Jack", "Uptown", 2, 30.0, 10.0 });
	my_friends.push_back(FriendClass{ "Jack Jack", "Uptown", 2, 30.0, 10.0 });
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.printFriend();

	return 0;
}