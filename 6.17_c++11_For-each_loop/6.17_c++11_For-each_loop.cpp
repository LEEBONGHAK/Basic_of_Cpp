#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

#define endl '\n'
using namespace std;

int main()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	// output
	for (int number : fibonacci)
		cout << number << " ";
	cout << endl;

	// change array values
	for (auto& number : fibonacci)
		number *= 10;

	// output
	for (const auto number : fibonacci)
		cout << number << " ";
	cout << endl;



	// find maximum number
	int max_number = numeric_limits<int>::lowest();
	for (const auto& n : fibonacci)
		max_number = max(max_number, n);
	cout << max_number << endl;


	cout << endl;
	

	// 동적할당을 하면 for-each문 사용 불가 -> vector 사용
	std::vector<int> fibonacci1 = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	// output
	for (int number : fibonacci1)
		cout << number << " ";
	cout << endl;

	// change array values
	for (auto& number : fibonacci1)
		number *= 10;

	// output
	for (const auto number : fibonacci1)
		cout << number << " ";
	cout << endl;

	return 0;
}