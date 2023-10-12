#include <iostream>
using namespace std;

int main()
{
    // Queste operazioni impiegano nulla, in quanto il compilatore sa
    // in anticipo quanto vale ogni tipo. Vedi sizeof.s

    cout << "Dimensioni in byte" << '\n';

    cout << "float:\t"              << sizeof(float)            << '\n';
    cout << "double:\t"             << sizeof(double)           << '\n';
    cout << "short:\t"              << sizeof(short)            << '\n';
    cout << "int:\t"                << sizeof(int)              << '\n';
    cout << "long:\t"               << sizeof(long)             << '\n';
    cout << "long double:\t"        << sizeof(long double)      << '\n';
    cout << "unsigned char:\t"      << sizeof(unsigned char)    << '\n';
    cout << "unsigned short:\t"     << sizeof(unsigned short)   << '\n';
    cout << "unsigned int:\t"       << sizeof(unsigned int)     << '\n';
    cout << "unsigned long:\t"      << sizeof(unsigned long)    << '\n';
    cout << "signed char:\t"        << sizeof(signed char)      << '\n';
    cout << "costante carattere:\t" << sizeof 'c'               << '\n';
    cout << "costante intera:\t"    << sizeof 3                 << '\n';
    cout << "costante reale:\t"     << sizeof 3.5               << '\n';

    int i = 0;
    cout << "variabile intera:\t"   << sizeof i << '\n';

//  cout << "char:\t" << sizeof char << '\n';	// Errore!

    return 0;
}
