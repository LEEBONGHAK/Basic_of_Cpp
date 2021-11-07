#include <iostream>

#define endl '\n'
using namespace std;

struct Rectangle
{
	int length;
	int width;
};

int main()
{
	/* array */
	int one_student_score;	// 1 variable
	int student_scores[5];	// 5 int

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;
	cout << endl;

	one_student_score = 100;

	// array에 데이터 저장
	student_scores[0] = 80;	// 1st element
	student_scores[1] = 70;	// 2nd element
	student_scores[2] = 60;	// 3rd element
	student_scores[3] = 50;	// 4th element
	student_scores[4] = 40;	// 5th element

	cout << student_scores[0] << endl;
	cout << student_scores[1] << endl;
	cout << student_scores[2] << endl;
	cout << student_scores[3] << endl;
	cout << student_scores[4] << endl;
	cout << endl;

	cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;
	cout << endl;


	// struct와 array
	cout << sizeof(Rectangle) << endl;
	Rectangle rect_arr[10];
	cout << sizeof(rect_arr) << endl;
	cout << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;


	// array 초기화
	int my_arr[5] = { 1,2,3,4,5 };
	cout << my_arr[0] << endl;
	cout << my_arr[1] << endl;
	cout << my_arr[2] << endl;
	cout << my_arr[3] << endl;
	cout << my_arr[4] << endl;
	cout << endl;

	int my_arr1[5] = { 1,2, };
	cout << my_arr1[0] << endl;
	cout << my_arr1[1] << endl;
	cout << my_arr1[2] << endl;
	cout << my_arr1[3] << endl;
	cout << my_arr1[4] << endl;
	cout << endl;

	// C11부터
	int my_arr2[]{ 1,2,3,4,5 };
	cout << my_arr2[0] << endl;
	cout << my_arr2[1] << endl;
	cout << my_arr2[2] << endl;
	cout << my_arr2[3] << endl;
	cout << my_arr2[4] << endl;
	cout << endl;

	// enumerate and array
	enum StudentName
	{
		JACKJACK,	// = 0
		DASH,		// = 1
		VIOLET,		// = 2
	};
	cout << my_arr2[JACKJACK] << endl;
	cout << my_arr2[DASH] << endl;
	cout << my_arr2[VIOLET] << endl;

	return 0;
}