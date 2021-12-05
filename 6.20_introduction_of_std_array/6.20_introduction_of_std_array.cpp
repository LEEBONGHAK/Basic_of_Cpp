#include <iostream>
#include <array>
#include <algorithm>

#define endl '\n'
using namespace std;

void printLength(const array<int, 5> &arr)	// &(reference)를 쓰면 복사되는 과정을 피할 수 있음 즉, 시간 감축 효과
{
	cout << arr.size() << endl;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };	// normal array
	std::array<int, 5> my_arr = { 1,2,3,4,5 };	// using std::array

	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2, };
	
	cout << my_arr[0] << endl;	// 무조건 해봄 (선 체크 안함)
	cout << my_arr.at(0) << endl;	// 체크 후 예외처리 해줌 -> 조금 느림
	cout << endl;

	cout << my_arr.size() << endl;
	cout << endl;


	cout << endl;


	array<int, 5> arr2 = { 4,1,2,7,0 };
	for (auto& element : arr2)
		cout << element << " ";
	cout << endl;

	std::sort(arr2.begin(), arr2.end());
	for (auto& element : arr2)
		cout << element << " ";
	cout << endl;

	// reverse sort
	std::sort(arr2.rbegin(), arr2.rend());
	for (auto& element : arr2)
		cout << element << " ";
	cout << endl;

	return 0;
}