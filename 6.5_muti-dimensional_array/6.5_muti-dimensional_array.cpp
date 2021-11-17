#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns= 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int column = 0; column < num_columns; column++)
		{
			cout << '[' << row << ']' << '[' << column << ']' << '\t';
		}

		cout << endl;
	}
	cout << endl;

	// multi-dimensional array
	// row-major <-> column-major
	int arr[num_rows][num_columns] =	// row-major
	{
		{1,2,3,4,5},		// row 0
		{6,7,8,9,10},		// row 1
		{11,12,13,14,15},	// row 2
	};
	for (int row = 0; row < num_rows; row++)
	{
		for (int column = 0; column < num_columns; column++)
		{
			cout << arr[row][column] << " " << (int)&arr[row][column] << '\t';
		}

		cout << endl;
	}
	cout << endl;

	return 0;
}