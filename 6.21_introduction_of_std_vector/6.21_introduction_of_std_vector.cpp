#include <iostream>
//#include <array>
#include <vector>

#define endl '\n'
using namespace std;

int main()
{
	//std::array<int, 5> arr;
	std::vector<int> arr;	// vector는 알아서 메모리를 지워줌

	std::vector<int> arr1 = { 1,2,3,4,5 };
	cout << arr1.size() << endl;

	std::vector<int> arr2 = { 1,2,3, };
	cout << arr2.size() << endl;

	std::vector<int> arr3 { 1,2,3, };
	cout << arr3.size() << endl;


	cout << endl;


	vector<int> arr4 = { 1,2,3,4,5 };
	for (auto &itr : arr4)
		cout << itr << " ";
	cout << endl;

	cout << arr4.size() << endl;
	cout << arr4[1] << endl;
	cout << arr4.at(1) << endl;
	cout << endl;

	arr4.resize(10);	// vector size 변화
	cout << arr4.size() << endl;
	for (auto& itr : arr4)
		cout << itr << " ";
	cout << endl << endl;

	arr4.resize(2);
	cout << arr4.size() << endl;
	for (auto& itr : arr4)
		cout << itr << " ";
	cout << endl;

	return 0;
}