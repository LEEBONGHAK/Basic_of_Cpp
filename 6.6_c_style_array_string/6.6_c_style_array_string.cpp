#include <iostream>

#define endl '\n'
using namespace std;

int main()
{
	char myString[] = "string";	// include null(\0) character

	for (int i = 0; i < 7; i++) {
		cout << myString[i] << " " << (int)myString[i] << endl;
	}
	cout << endl;

	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	cout << endl;

	char myString1[255];
	cin >> myString1;
	cout << myString1 << endl;
	cout << endl;

	char myString2[255];
	cin.getline(myString2, 255);
	cout << myString2 << endl;

	int ix = 0;
	while (true)
	{
		if (myString2[ix] == '\0') break;

		cout << myString2[ix] << " " << (int)myString2[ix] << endl;
		ix++;
	}

	return 0;
}