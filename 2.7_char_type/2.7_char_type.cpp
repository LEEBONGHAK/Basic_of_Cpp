#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);	// c1 = 65;, c1{ 65 };
	char c2 = 'A';	// "" : string, '': char

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	printf("\n");


	// c-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;
	printf("\n");

	// cpp-style casting
	cout << char(65) << endl;	// 강제 변환
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;	// 컴파일러 확인
	cout << static_cast<int>('A') << endl;
	printf("\n");

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;
	cout << int(ch) << endl;
	cout << ch << endl;
	printf("\n");


	cin >> ch;	// char type이기 때문에 한 글자만 받음, 그 외의 것은 buffer에 남아 있음
	cout << ch << " " << static_cast<int>(ch) << endl;
	cin >> ch;
	cout << ch << " " << static_cast<int>(ch) << endl;
	printf("\n");


	// char type size
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;
	printf("\n");

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
	printf("\n");


	// \n : 줄바꿈
	// std::endl : buffer에 있는 내용을 일단 화면에 다 출력후 줄바꿈
	// std::flush : buffer에 있는 내용을 일단 화면에 다 출력후 줄바꿈 하지 않음
	cout << int('\n') << endl;
	cout << "This is first line \nsecond line\n";
	cout << "This is first line " << endl;
	cout << "second line" << endl;
	printf("\n");

	cout << int('\t') << endl;
	cout << "This is first line \tsecond line\n";
	cout << '\a' << endl;	// 알람소리


	// 이외 char type
	wchar_t c;	// 윈도우에서 사용되는 타입인데 가급적 사용하지 않는 것이 좋음
	char32_t c3;	// 이모티콘을 위해 char type size를 늘린것

	return 0;
}