#include <iostream>

#define endl '\n'
using namespace std;

// 열거형의 영역 제한
// namespace로 묶어주는 거랑 비슷
enum class Color
{
	RED,
	BLUE,
};

enum class Fruit
{
	BANANA,
	APPLE,
};

int main()
{
	/* 영역 제한 열거형(열거형 클래스) - Scoped Enumeration(Enum Class) */
	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	// 강제 변환을 이용해야 비교 가능, 그냥을 서로 비교 불가
	if (static_cast<int>(color) == static_cast<int>(fruit)) cout << "Color is fruit?" << endl;
	else cout << "Color is not fruit" << endl;

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;

	if (color1 == color2) cout << "Color is same" << endl;
	else cout << "Color is not same" << endl;

	return 0;
}