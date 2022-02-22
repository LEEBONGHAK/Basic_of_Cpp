#include <iostream>

#define endl '\n'
using namespace std;

class Fruit
{
public:
	// 특정 클래스만 사용하는 데이터 타입의 경우 밖에 두기보다 이렇게 사용하는 것도 괜찮음
	enum FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};




int main()
{
	Fruit apple(Fruit::APPLE);

	if (apple.getType() == Fruit::APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}
