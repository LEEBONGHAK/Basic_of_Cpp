#include <iostream>
#include <cstdlib>		// std::rand(), std::srand();
#include <ctime>		// std::time()
#include <random>		// std::random_device,	std::mt19937, std::mt19937_64, 	std::uniform_int_distribution<> dice( , );

#define endl '\n'
using namespace std;

// Pseudo Random Number Generator (유사 난수 생성기) - 원리 설명
unsigned int PRNG()	
{
	static unsigned int seed = 5523;	// seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);	// RAND_MAX : 난수를 만들 때 나올 수 있는 가장 큰 수

	return min + static_cast<int>(max - min + 1) * (std::rand() * fraction);
}

int main()
{
	/* random numbers generation */
	for (int i = 1; i <= 100; i++)
	{
		cout << PRNG() << "\t";

		if (i % 5 == 0) cout << endl;
	}
	cout << endl;

	//std::srand(5323);	// seed 설정 - seed가 고정되어 있으면 항상 같은 패턴으로 난수가 나옴 (디버깅을 할때는 seed가 고정시켜 놓는게 좋음)
	std::srand(static_cast<unsigned int>(std::time(0)));	// seed를 시간와 연동 - 다른 패턴의 난수

	for (int i = 1; i <= 100; i++)
	{
		cout << std::rand() << "\t";

		if (i % 5 == 0) cout << endl;
	}
	cout << endl;

	// 범위 내의 난수 생성
	for (int i = 1; i <= 100; i++)
	{
		cout << getRandomNumber(5, 8) << "\t";

		if (i % 5 == 0) cout << endl;
	}
	cout << endl;

	for (int i = 1; i <= 100; i++)
	{
		// 숫자가 큰 경우 특정 숫자에 몰리는 경우도 존재
		cout << rand() % 4 + 5 << "\t";

		if (i % 5 == 0) cout << endl;
	}
	cout << endl;

	std::random_device rd;
	std::mt19937 mesenne(rd());		// create a mesenne twister
	std::uniform_int_distribution<> dice(1, 6);

	for (int i = 1; i <= 20; i++)
	{
		cout << dice(mesenne) << "\t";

		if (i % 5 == 0) cout << endl;
	}
	cout << endl;

	return 0;
}