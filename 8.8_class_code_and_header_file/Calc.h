#pragma once

#include <iostream>
#define endl '\n'

class Calc
{
private:
	int	m_value;

public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	void print();
};