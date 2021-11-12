#include <iostream>

#define endl '\n'
using namespace std;

void printArray(const int arr[], const int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	/*
		Selection Sort
	
		3 5 2 1 4
		1 5 2 3 4
		1 2 5 3 4
		1 2 3 5 4
		1 2 3 4 5
	*/

	const int length = 5;
	int arr[length] = { 3,5,2,1,4 };
	printArray(arr, length);
	// Selection Sort without std::swap()
	for (int i = 0; i < length; i++) {
		
		int smallestIndex = i;
		for (int j = i; j < length; j++) {
			if (arr[smallestIndex] > arr[j]) smallestIndex = j;
		}

		// swap two values in the array
		int temp = arr[smallestIndex];
		arr[smallestIndex] = arr[i];
		arr[i] = temp;
		
		printArray(arr, length);
	}
	cout << endl;


	int arr1[length] = { 3,5,2,1,4 };
	printArray(arr1, length);
	// Selection Sort with std::swap()
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			if (arr1[i] > arr1[j]) swap(arr1[i], arr1[j]);
		}

		printArray(arr1, length);
	}
	cout << endl;

	return 0;
}