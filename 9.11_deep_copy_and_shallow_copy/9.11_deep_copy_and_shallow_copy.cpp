#include <iostream>
#include <cassert>

#define endl '\n'
using namespace std;

/*
    대입 연산자 오버로딩
    깊은 복사 vs 얕은 복사
    
    깊은 복사(deep copy)
    - 다른 주소에 데이터를 복사 시킨 것 
    - 주소 다름, 데이터 동일

    얕은 복사(shallow copy)
    - 포인터 주소 자체를 복사한 것 
    - 주소, 데이터 동일
*/

class MyString
{
//private:  // 일반적으로는 private이지만 여기서는 주소를 보기 위해 public
public:
    char* m_data = nullptr;
    int m_length = 0;

public:
    MyString(const char* source = "")
    {
        assert(source);

        m_length = std::strlen(source) + 1;
        m_data = new char[m_length];

        for (int i = 0; i < m_length; i++)
            m_data[i] = source[i];

        m_data[m_length] = '\0';
    }

    MyString(const MyString &source)
    {
        cout << "Copy constructor" << endl;

        m_length = source.m_length;

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; i++)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
    }

    MyString& operator = (const MyString &source)
    {
        // shallow copy
        //this->m_data = source.m_data;
        //this->m_length = source.m_length;

        cout << "Assignment operator" << endl;

        if (this == &source) // prevent self-assignment (ex. hello = hello) - 문제가 생길 수 있음
            return *this;

        delete[] m_data;    // 가지고 있을 수도 있으니 지워버림

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; i++)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;

        return *this;
    }

    ~MyString()
    {
        delete[] m_data;
    }

    char* getString() { return m_data; }
    int getLength() { return m_length; }
};

int main()
{
    MyString hello("Hello");

    cout << (int*)hello.m_data << endl;
    cout << hello.getString() << endl;

    {
        MyString copy = hello;
        cout << (int*)copy.m_data << endl;
        cout << copy.getString() << endl;
    }

    cout << hello.getString() << endl << endl;

    MyString hello1("Hello");

    // call copy constructor
    //MyString str1 = hello1;
    MyString str1(hello1);

    // call assignment operator
    MyString str2;
    str2 = hello1;

    return 0;
}