#include <iostream>
#include <typeinfo>
#include <string>

#define endl '\n'
using namespace std;

int computeDamage(int weapon_id)
{
	if (weapon_id == 0)	// sword
	{
		return 1;
	}

	if (weapon_id == 1)	// hammer
	{
		return 2;
	}

	// ...
}

// 열겨형 정의 - 각 기호(대부분 대문자로 사용)에 정수형으로 자동으로 할당됨
enum Color		// user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE = -1,	// 따로 지정도 가능
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};

int main()
{
	/* 열거형(Enumerated Types) - 비슷한 유형의 다양한 옵션들을 기호로 표현하기 위해 사용 */
	// 초기화
	Color paint = COLOR_BLACK;
	Color house(COLOR_RED);
	Color apple{ COLOR_RED };

	cout << "My color : " << COLOR_BLACK << endl;
	cout << "My color : " << COLOR_RED << endl;
	cout << "My color : " << COLOR_BLUE << endl;
	cout << "My color : " << COLOR_SKYBLUE << endl;

	//Color my_color = 3;	// 이런 식으로 사용 불가 - int와 100% 호환이 되어있는 것이 아님
	Color my_color = static_cast<Color>(3);		// casting을 이용해 가능

	//cin >> my_color;	// 사용 불가
	// 우회법
	int in_number;
	cin >> in_number;
	if (in_number == COLOR_BLACK) my_color = COLOR_BLACK;
	if (in_number == static_cast<Color>(0)) my_color = static_cast<Color>(0);

	// 권장되지 않는 방법 - 사람의 입력 실수로 여러 오류 발생 가능
	string str_input;
	getline(cin, str_input);
	if (str_input == "COLOR_BLACK") my_color = static_cast<Color>(0);

	return 0;
}