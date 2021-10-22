#include <iostream>
#include <vector>
#include <cstdint>

#define endl '\n'
using namespace std;

int main()
{
	// distance_t를 사용할 때는 double type으로 사용하겠다 - 메모 겸 주석 느낌
	typedef double distance_t;	// 유지, 관리하기도 도움이 됨

	// 고정 너비 상수 - type aliases를 사용한 예
	std::int8_t i(97);

	// 컴파일러 입장에서는 같지만 프로그래밍 편의를 위해 사용
	double my_distance;
	distance_t home2work;
	distance_t home2school;


	// 복잡한 자료형에서
	std::vector<std::pair<std::string, int>> pairlist;
	vector<pair<string, int>> pairlist2;

	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist3;
	

	// 다른 방법 - 사용하는 것을 같지만 내부적으로는 차이 존재
	using pairlist_t2 = vector<pair<string, int>>;
	pairlist_t2 pairlist4;

	return 0;
}