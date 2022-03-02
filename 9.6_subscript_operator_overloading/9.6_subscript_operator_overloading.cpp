#include <iostream>
#include <cassert>

#define endl '\n'
using namespace std;

class IntList
{
private:
    int m_list[10] = { 1,2,3,4,5,6,7,8,9,10 };

public:
    //void setItem(int index, int value)
    //{
    //    m_list[index] = value;
    //}

    //int getItem(int index)
    //{
    //    return m_list[index];
    //}

    //int *getList()
    //{
    //    return m_list;
    //}

    // subscript operator
    int & operator []  (const int index)
    {
        assert(index >= 0);
        assert(index < 10);

        return m_list[index];
    }

    // 값만 가지고 오길 바라는 경우
    //const int & operator []  (const int index) const
    //{
    //    assert(index >= 0);
    //    assert(index < 10);
    // 
    //    return m_list[index];
    //}
};

int main()
{
    //IntList my_list;
    //my_list.setItem(3, 1);
    //cout << my_list.getItem(3) << endl;
    //my_list.getList()[3] = 11;
    //cout << my_list.getList()[3] << endl;

    IntList my_list;
    cout << my_list[3] << endl;
    my_list[3] = 10;
    cout << my_list[3] << endl;

    return 0;
}