#include <iostream>

int main()
{
	int x(0);	// x = 0;

	// {}: 영역 분리
	{
		int x = 2;

		std::cout << x << " " << &x << std::endl;
	}

	{
		int x = 1;

		std::cout << x << " " << &x << std::endl;
	}

	std::cout << x << " " << &x << std::endl;

	return 0;
}
