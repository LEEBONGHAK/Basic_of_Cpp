#include <iostream>
#include <bitset>

#define endl '\n'

using namespace std;

int main()
{
    /* Bit flags */

    /*
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;
    bool item5_flag = false;
    ...
    */
    
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    // opt4, 5, 6, ...

    cout << bitset<8>(opt0) << endl;  // 00000001
    cout << bitset<8>(opt1) << endl;  // 00000010
    cout << bitset<8>(opt2) << endl;  // 00000100
    cout << bitset<8>(opt3) << endl;  // 00001000
    cout << endl;

    unsigned char items_flag = 0;
    cout << "No item " << bitset<8>(items_flag) << endl;  // 00000000

    // item0 on
    items_flag |= opt0;
    cout << "Item0 obtained " << bitset<8>(items_flag) << endl;  // 00000001

    // item3 on
    items_flag |= opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl;  // 00001001

    // item3 lost
    items_flag &= ~opt3;
    cout << "Item3 lost " << bitset<8>(items_flag) << endl;  // 00001001
    cout << endl;

    // has item1?
    if (items_flag & opt1) cout << "I have item1" << endl;
    else cout << "I don't have item1" << endl;

    // has item0?
    if (items_flag & opt0) cout << "I have item0" << endl;
    else cout << "I don't have item1" << endl;

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;
    cout << endl;

    if ((items_flag & opt2) && !(items_flag & opt1)) {
        //items_flag ^= (opt2 | opt1);
        items_flag ^= opt2;
        items_flag ^= opt1;
    }
    cout << bitset<8>(items_flag) << endl;
    cout << endl << endl;


    /* 
        Bit Masks 

        - bit mask를 이용해 RGB값 뽑아내기
    */
    
    const unsigned int red_mask = 0xFF0000;
    cout << bitset<32>(red_mask) << endl;

    const unsigned int green_mask = 0x00FF00;
    cout << bitset<32>(green_mask) << endl;

    const unsigned int blue_mask = 0x0000FF;
    cout << bitset<32>(blue_mask) << endl;

    unsigned int pixel_color = 0xDAA520;    // 16진수
    cout << bitset<32>(pixel_color) << endl;
    cout << endl;


    unsigned char red, green, blue;

    red = (pixel_color & red_mask) >> 16;
    cout << "red " << bitset<8>(red) << " " << int(red) << endl;

    green = (pixel_color & green_mask) >> 8;
    cout << "green " << bitset<8>(green) << " " << int(green) << endl;

    blue = pixel_color & blue_mask;
    cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;



    return 0;
}