﻿#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>	// 시간의 신 이름, 시간 재는 라이브러리

#define endl '\n'
using namespace std;

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();

		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};

// sorting 하는 시간 측정
int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() }; // random number generator

	vector<int> vec(10);
	for (unsigned int i = 0; i < vec.size(); i++)
		vec[i] = i;

	std::shuffle(vec.begin(), vec.end(), mersenne_engine);

	for (auto& e : vec)
		cout << e << " ";
	cout << endl;
	
	Timer timer;

	std::sort(vec.begin(), vec.end());

	timer.elapsed();

	for (auto& e : vec)
		cout << e << " ";
	cout << endl;

	return 0;
}
