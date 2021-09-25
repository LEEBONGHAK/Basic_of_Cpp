#include <iostream>
#include <iomanip>	// setprecision()
#include <limits>	// numeric_limits
#include <cmath>	// isnan(), isinf()

int main()
{
	using namespace std;

	// float의 경우 부호 1 bit(0이면 +, 1이면 -), 지수 1 byte, 가수 나머지 메모리 사용
	float f = 3.141592f;
	double d(3.141592);
	long double ld = 3.141592;

	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;
	printf("\n");

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	printf("\n");

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	printf("\n");

	// scientific notation
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 0.314e1 << endl;
	cout << 0.0314e2 << endl;

	// 출력 시 소수점 자리 조정
	cout << std::setprecision(1) << endl;
	cout << 1.0 / 3.0 << endl;

	float f2(123456789.0f);		// 10 significant digits
	cout << std::setprecision(9) << endl;
	cout << f2 << endl;		// 내부적으로 2진수로 사용해서 저장하기 때문에 오차가 발생할 수 있음

	double d2 = 0.1;
	cout << setprecision(17) << endl;
	cout << d2 << endl;
	printf("\n");

	double d3 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	cout << d3 << endl;
	printf("\n");

	double zero = 0.0;
	double posinf = 1.0 / zero;
	double neginf = -1.0 / zero;
	double nan = zero / zero;

	cout << zero << endl;
	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;	// (ind) = indeterminate
	printf("\n");

	// isnan() : nan(not a number)인지 판별하고 boolean으로 return
	// isinf() : inf(infinite)인지 판별하고 boolean으로 return
	cout << zero << " " << std::isnan(zero) << endl;
	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;

	return 0;
}