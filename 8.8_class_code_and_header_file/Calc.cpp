#include "Calc.h"

using namespace std;	// 헤더파일에서는 사용하지 않는 것이 좋음

Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc& Calc::sub(int value)
{
	m_value -= value;
	return *this;
}

Calc& Calc::mult(int value)
{
	m_value *= value;
	return *this;
}

void Calc::print()
{
	cout << m_value << endl;
}
