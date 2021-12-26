#include <iostream>
#include <string>
#include <vector>

#define endl '\n'
using namespace std;

// 변수는 private으로 하는 것이 권장된 (유지 보수 및 보안 관련)
class Date
{
public:		// access specifier (접근 지정자) - 밖에서 접근 가능하게 할지 안할지 지정 (public, private(default), protected)
	int m_month;
	int m_day;
	int m_year;

	// access function :  private member를 접근할 수 있는 함수
	void setDate(const int& month_input, const int& day_input, const int& year_input)	// setters
	{
		pr_month = month_input;
		pr_day = day_input;
		pr_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		pr_month = month_input;
	}

	void setDay(const int& day_input)
	{
		pr_day = day_input;
	}

	void setYear(const int& year_input)
	{
		pr_year = year_input;
	}

	const int& getMonth()	// getters
	{
		return pr_month;
	}

	const int& getDay()
	{
		return pr_day;
	}

	const int& getYear()
	{
		return pr_year;
	}

	void copyFrom(const Date& original)
	{
		pr_month = original.pr_month;
		pr_day = original.pr_day;
		pr_year = original.pr_year;
	}

private:
	int pr_month;
	int pr_day;
	int pr_year;
};

int main()
{
	/* 캡슐화 (Encapsulation) */

	Date today;	// { 8, 4, 2025 }
	// public member 자유롭게 접근 가능
	today.m_month = 8;
	today.m_day = 4;
	today.m_year = 2025;

	today.setDate(8, 4, 2025);
	cout << today.getDay() << endl;
	cout << endl;

	Date copy;
	copy.copyFrom(today);

	return 0;
}