#include <iostream>
#include <string>	// string type
#include <limits>	// std::numeric_limits<std::streamsize>::max()

#define endl '\n'
using namespace std;

int main()
{
	const char my_strs[] = "Hello, World";
	const string my_hello = "Hello, World";
	const string my_hello2{ "Hello, World" };

	cout << "Hello, World!" << endl;
	cout << my_hello << endl;
	cout << endl;
	
	//string my_ID = 123;		// error
	string my_ID = "123";

	std::string name;
	cout << "Your name? : ";
	cin >> name;
	//std::getline(std::cin, name);

	std::cin.ignore(32767, '\n');	// '\n'이 올때까지 최대 32767개의 문자를 무시해라
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 위와 같음

	string age;
	cout << "Your age? : ";
	//cin >> age;
	std::getline(std::cin, age);
	cout << name << " " << age << endl;
	cout << endl;

	string a("Hello, ");
	string b("World!");
	string hw = a + b;	// append

	hw += " I'm good";

	cout << hw << endl;
	cout << hw.length() << endl;	// 문자열의 길이 출력 단, \0 제외

	return 0;
}   