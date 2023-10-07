// bit.cpp -- operatori bit a bit
// vettori di bit

#include <iostream>
using namespace std;

int main()
{
    unsigned short a = 0xFFFA;  // 1111 1111 1111 1010 (65530)
    unsigned short b = ~a;      // 0000 0000 0000 0101 (5)
    unsigned short c = 0x0013;  // 0000 0000 0001 0011 (19)

    unsigned short c1, c2, c3;

    c1 = b | c;                 // 0000 0000 0001 0111 (23)
    c2 = b & c;                 // 0000 0000 0000 0001 (1)
    c3 = b ^ c;                 // 0000 0000 0001 0110 (22)

    unsigned short b1, b2;

    b1 = b << 2;                // 0000 0000 0001 0100 (20)
    b2 = b >> 1;                // 0000 0000 0000 0010 (2)

    cout << "a = " << a << '\n' << "b = " << b << '\n' << "c = " << c << '\n';

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl;

    cout << "b1 = " << b1 << '\n' << "b2 = " << b2 << endl;

    return 0;
}
